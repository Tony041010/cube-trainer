#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"Algorithm_Manager.cc"

class Algorithm_Manager{
	private:
		int n;
		std::vector<algo_utils::Algorithm> Algorithms;
		
	public:
		void init(){
			std::ifstream Algorithm_file("algorithm_file.txt");
			Algorithm_file >> this-> n ;
			this-> Algorithms.resize(n);
			Algorithm_file.ignore();
			for(int i = 0;i < n ; ++i){
				getline(Algorithm_file , Algorithms[i].name);
			}
			for(int i = 0;i < n ; ++i){
				getline(Algorithm_file , Algorithms[i].steps);
			}
			for(int i = 0;i < n ; ++i){
				this -> Algorithms[i].image.resize( 5 ); 
				for(int j = 0 ; j < 5 ; ++j){
					getline(Algorithm_file , Algorithms[i].image[j]);
				}
			}
		}
		void PrintAllAlgorithms(){ algo_utils::PrintAllAlgorithms(this->Algorithms);}
		std::vector<std::string> &GetAllNames(){ return algo_utils::GetAllNames(this->Algorithms); }	
		void GetAlgorithm(){ algo_utils::GetAlgorithm(this->Algorithms); }
}; 
