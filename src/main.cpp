#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>

int main(int argc, char *argv[])
{
	if(argc < 2)
		return 0;

	std::vector<std::string> recipes;

	// Input
	{
		std::ifstream data(argv[1]);
		std::string recipe;

		for(int i = 0; i < 3; i++){
			std::getline(data, recipe);
			recipes.push_back(recipe);
		}
	}

	// Output
	if(argc < 3){
		for(int idx = 0; idx < 3; idx++){
			int id = idx + 1;
			std::cout << id << ": " << recipes[idx] << std::endl;
		}
	}else{
		int id = std::atoi(argv[2]);
		int idx = id - 1;
		std::cout << id << ": " << recipes[idx] << std::endl;
	}
}
