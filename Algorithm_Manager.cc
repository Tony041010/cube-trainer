#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#include"Algorithm_Manager.h"

AlgorithmManager::Algorithm string;

//read the Algorithm_File by ifstream.
std::ifstream Algorithm_File ( "algorithm_file.txt" ) ;

//Let all the names push in vectors.
std::vector<std::string> AlgorithmManager::GetAllAlgorithmNames(){
	std::vector<std::string> GetAllNames;
	for ( int times = 1 ; times <= 7 ; times++ ) {
		std::getline( Algorithm_File , string.name );
		GetAllNames.push_back ( string.name ) ;
	}
	Algorithm_File.close();
	return GetAllNames;
}

//get the specific algorithm with its name.
void GetAlgorithm( std::string &name ){
	std::string &name = string.name;
	std::cin>>name;
	std::ifstream Algorithm_File("algorithm_file.txt");
	std::string TargetName;
	for(int t=0;t<7;t++){
		std::getline(Algorithm_File ,TargetName );
		if(TargetName = name ){
			std::int lines= t*5+14+1; // where the target algorithm begins to be written.
			std::break;
		}
	}
	
	//start to get the image of the algorithm.
	std::TargetName='\0';
	std::int count = lines;
	std::int q=0;
	for(int i=lines;i<lines+5;i++){
		while(getline(Algorithm_File , TargetName) && q<count-1){
			q++;
		}
		cout<<TargetName<<'\n';
	}
	Algorithm_File.close();
	return;
}

