#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if(argc < 2)
		return 0;

	std::ifstream data(argv[1]);
	std::string recipe;

	std::getline(data, recipe);
	std::cout << recipe << std::endl;
}
