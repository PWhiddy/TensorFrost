#pragma once

#include "Backend/CodeGen/Generators.h"
#include "IR/KernelGen.h"

namespace TensorFrost {
using namespace std;

string GetOperationListing(const IR& ir, bool compact, map<Node*, string> invalid) {
	// first give unique names to all the tensors
	GenerateNodeNames(ir);
	//ClusterProp clusters = ir.GetClusterProperties();

	// now create the listing
	string listing;
	int indent = 0;
	for (auto node = ir.begin(); !node.end(); node.next()) {
		if (compact) {
			if (node->name == "const") continue;
		}

		if (node->name == "loop_end") {
			indent--;
		}

		//if (node->kernel_ != prev_cluster) {
		//	listing += "\n";
		//	switch (node->kernel_->type_) {
		//		case Scope::ScopeType::Host:
		//			listing += "Host: \n";
		//			break;
		//		case Scope::ScopeType::Kernel:
		//			listing += "Kernel: \n";
		//			break;
		//	}
		//}

		if (invalid.contains(node.get())) {
			listing += "[ERROR] " + invalid[node.get()] + ": \n";
		}

		//if (!compact && node->kernel_ != nullptr) {
		//	listing += GetNodeName(node->kernel_->begin_, false) + ": ";
		//}

		// indent
		for (int i = 0; i < indent; i++) {
			listing += "  ";
		}

		Arguments inputs = node->GetArguments(Arg::Type::Input);
		Arguments indices = node->GetArguments(Arg::Type::Index);
		Arguments shape = node->GetArguments(Arg::Type::Shape);
		Arguments memory = node->GetArguments(Arg::Type::Memory);
		
		listing += "[";
		for (int i = 0; i < shape.size(); i++) {
			if (i != 0) listing += ",";
			listing += GetNodeName(shape[i].from_->get(), false);
		}
		listing += "]";

		if (node->tensor_->type != DataType::None) {
			listing += " " + DataTypeToString(node->tensor_->type) + " ";
		}

		if (node->tensor_->type != DataType::None) {
			// 
			//  the tensor name
			listing += node->var_name + " =";
		}

		listing += " " + node->name + "(";

		if (!memory.empty()) {
			listing += "memory=[";
			for (int i = 0; i < memory.size(); i++) {
				if (i != 0) listing += ",";
				listing += GetNodeName(memory[i].from_->get(), false);
			}
			listing += "], ";
		}

		if (!inputs.empty()) {
			listing += "inputs=[";
			for (int i = 0; i < inputs.size(); i++) {
				if (i != 0) listing += ",";
				listing += GetNodeName(inputs[i].from_->get(), false);
			}
			listing += "], ";
		}

		if (!indices.empty()) {
			listing += "indices=[";
			for (int i = 0; i < indices.size(); i++) {
				if (i != 0) listing += ",";
				listing += GetNodeName(indices[i].from_->get(), false);
			}
			listing += "], ";
		}

		if (!node->tensor_->data.empty()) {
			listing += "data=[";
			for (int i = 0; i < node->tensor_->data.size(); i++) {
				if (i != 0) listing += ",";
				listing += to_string(node->tensor_->data[i]);
			}
			listing += "], ";
		}

		switch (node->memory_type_) {
			case MemoryType::Input:
				listing += "memory_type=input, ";
				break;
			case MemoryType::Output:
				listing += "memory_type=output, ";
				break;
			case MemoryType::Constant:
				listing += "memory_type=constant, ";
				break;
			case MemoryType::Shape:
				listing += "memory_type=input_shape, ";
				break;
			default:
				break;
		}

		if (node->cost_ >= 0) {
			listing += "cost=" + to_string(node->cost_);
		}

		listing += ")\n";

		if (node->name == "loop_begin") {
			indent++;
		}
	}

	return listing;
}

}  // namespace TensorFrost