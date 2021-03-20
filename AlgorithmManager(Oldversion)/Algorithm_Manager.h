#ifndef ALGORITHM_MANAGER_H
#define ALGORITHM_MANAGER_H

#include<string>
#include<vector>

class AlgorithmManager {
public:
  // AlgorithmManager can be called to print all algorithms with their correspondong names.
  AlgorithmManager( );

  struct Algorithm {
    std::string name;
    std::string steps;
    std::string image; // We now use 0 and 1 to present 7 algorithms.
  };
  // Gets an algorithm with its name.
void GetAlgorithm(const std::string name) ;
  // Gets all algorithm names.
	std::vector<std::string> GetAllAlgorithmNames();
};

#endif //endif terminated 'ALGORITHM_MANAGER.H'
