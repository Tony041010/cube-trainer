#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#include"Algorithm_Manager.h"

AlgorithmManager::Algorithm string;

//AlgorithmManager reads all 7 algorithms and print them out with their names.
AlgorithmManager::AlgorithmManager(const std::string algorithm_filepath){
	//read the Algorithm_File by ifstream.
	std::ifstream Algorithm_File ;
	Algorithm_File.open( "algorithm_file.txt" ,ios::in);
	string algorithm_filepath;
	std::string AllAlgorithm[7][5];
	int ReadCount=0;
	int limit=14;
	for(int Times=0;Times<7;Times++){
		for(int Layer=0;Layer<5;Layer++){
			while(getline(Algorithm_File,algorithm_filepath) && ReadCount<limit){
				ReadCount++;
			}
			AllAlgorithm[Times][Layer]=algorithm_filepath;
		}
	}
	Algorithm_File.close();
	
	//start to print the name , and the corresponding algorithm. 
	Algorithm_File.open("algorithm_file.txt" ,ios::in);
	std::string read;
	for(int TheTimes=1;TheTimes<=7;TheTimes++){
		getline(Algorithm_File, read);
		std::cout<<read<<" "<<":"<<'\n';
		for(int layer=0;layer<5;layer++){
			cout<<AllAlgorithm[TheTimes-1][layer]<<'\n';
		}
	}
	return ;
}

//Let all the names push in vectors.
std::vector<std::string> AlgorithmManager::GetAllAlgorithmNames(){
	
	//read the Algorithm_File by ifstream.
	std::ifstream Algorithm_File ;
	Algorithm_File.open("algorithm_file.txt" , ios::in);
	std::vector<std::string> GetAllNames;
	for ( std::int times = 1 ; times <= 7 ; times++ ) {
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
	std::ifstream Algorithm_File;
	Algorithm_File.open("algorithm_file.txt",)
	std::string TargetName;
	for(std::int t=0;t<7;t++){
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

