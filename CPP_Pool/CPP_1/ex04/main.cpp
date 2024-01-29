#include <iostream>
#include <fstream> 
#include <string.h>
int main(int argc, char **argv)
{
	if (argc != 4){
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string auxLine;
	std::string outLine;
	std::ifstream Reader(argv[1]);
	std::string outfile = argv[1];
	std::ofstream Writer(outfile.append(".replace"));

	while (getline(Reader, auxLine)) {
		for (int i = 0; i < auxLine.length(); i++)
			if (!auxLine.compare(i, strlen(argv[2]), argv[2])){
				
			}
	}
}