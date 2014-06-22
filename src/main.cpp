#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if(argc < 2)
		return 0;

	std::ifstream data(argv[1]);
	std::string recipe;

	for(int id = 1; id <= 3; id++){
		std::getline(data, recipe);
		std::cout << id << ": " << recipe << std::endl;
	}
}
