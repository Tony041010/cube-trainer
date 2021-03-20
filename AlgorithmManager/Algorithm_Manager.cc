#pragma once

#include"Algorithm_Manager.h"
namespace algo_utils{
	struct Algorithm{
		std::string name;
		std::string steps;
		std::vector<std::string> image;
	}; 
	
	void PrintAllAlgorithms(std::vector<Algorithm> &Algorithms){
		std::cout << Algorithms.size() << " Algorithms :\n";
		for(int i = 0 ; i < Algorithms.size() ; ++i){
			std::cout << Algorithms[i].name << " : " << Algorithms[i].steps <<'\n';
			for(int j = 0 ; j < 5 ;++j){
				std::cout << Algorithms[i].image[j] << '\n' ; 
			}
		}
		std::cout << std::endl;
	}
	
	std::vector<std::string> &GetAllNames(std::vector<Algorithm> &Algorithms){
		static std::vector<std::string> Names;
		Names.resize(Algorithms.size());
		for(int i = 0 ; i < Algorithms.size() ; ++i){
			Names[i] = Algorithms[i].name;
		}
		return Names;
	}
	
	void GetAlgorithm(std::vector<Algorithm> &Algorithms){
		int position;
		std::cin >> position;
		std::cout << Algorithms[position - 1].name << '\n';
		for(int j = 0 ; j < 5 ;++j){
			std::cout << Algorithms[position - 1].image[j] << '\n'; 
		}
		std::cout << std::endl;
	}
}
