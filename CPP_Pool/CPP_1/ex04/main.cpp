#include <iostream>
#include <fstream> 
#include <string.h>

void replace(std::string outLine, char *substr, int start, int end)
{
	int j = 0;
	while (j < strlen(substr) && j < end){
		outLine[start + j] = substr[j];
	}
	if (j < end){
		outLine.resize(outLine.length() + (end - j));
		while (j < end){
			char aux = outLine[start + j];
			outLine[start + j] = substr[j];
		}
	}else{
		outLine.erase(start + j, start + end);
	}
}

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
		outLine = auxLine;
		for (int i = 0; i < auxLine.length(); i++){
			if (!auxLine.compare(i, strlen(argv[2]), argv[2])){
				replace(outLine, argv[3], i, strlen(argv[2]));
				std::cout << outLine << std::endl;
			}
		}
		Writer << outLine;
	}
	Writer.close();
	Reader.close();
}
