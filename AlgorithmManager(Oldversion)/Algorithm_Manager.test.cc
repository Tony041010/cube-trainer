#include"Algorithm_Manager.h"

int main(){
	std::string instruction;
	while(std::cin>>instruction){
		if(instruction == "AlgorithmManager"){
			AlgorithmManager();	
		}
		else if(instruction == "GetAlgorithm"){
			std::string Target;
			std::cin>>Target;
			GetAlgorithm(Target);
		}
		else if(instruction == "GetAllAlgorithmNames"){
			GetAllAlgorithmNames();
			for(int position =0;position<7;position++){
				std::cout<< GetAllNames[position]<<'\n';
			}
		}
		else{
			std::cout<<"Wrong Instruction\n";
		}
	}
	return 0;
}
