#include"Algorithm_Manager.h" 

int main(){
	std::string instruction;
	while(std::cin >> instruction){
		Algorithm_Manager mng;
		mng.init();
		if(instruction == "AlgorithmManager"){
			mng.PrintAllAlgorithms();
		}
		else if(instruction == "GetAllNames"){
			for(int i = 0 ; i < 7 ; ++i){
				std::cout << mng.GetAllNames()[i] << '\n';
			}
		}
		else if(instruction == "GetAlgorithm"){
			mng.GetAlgorithm();
		}
		else{
			std::cout << "Wrong instruction\n";
		}
	}
	return 0;
}
