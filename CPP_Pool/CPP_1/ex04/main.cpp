#include <iostream>
#include <fstream>

std::string replace(std::string strOrigin, std::string strNew, std::string outLine)
{
	size_t	pos = 0;
	size_t	aux = 0;
	while (pos != std::string::npos) {
		pos = outLine.find(strOrigin, aux);
		if (pos != std::string::npos) {
			outLine.erase(pos, strOrigin.length());
			outLine.insert(pos, strNew);
			aux = pos + strNew.length();
		}
	}
	return (outLine);
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}

	std::string	strOrigin = argv[2];
	std::string	strNew = argv[3];
	std::string file = argv[1];
	std::string outLine;
	std::ifstream Reader(argv[1]);
	std::ofstream Writer(file.append(".replace"));

	if (strNew.empty() || strOrigin.empty()){
		std::cerr << "Error: " << "Args must be filled" << std::endl;
		Writer.close();
		Reader.close();
		return 1;
	}
	if (!Writer.is_open() || !Reader.is_open()){
		std::cerr << "Error: " << "Error creating opening files" << std::endl;
		Writer.close();
		Reader.close();
		return 1;
	}
	while (getline(Reader, outLine)) {
		outLine = replace(strOrigin, strNew, outLine);
		//std::cout << outLine << std::endl; // Mandar esta linea a la puta...
		Writer << outLine << std::endl;
	}
	Writer.close();
	Reader.close();
	return 0;
}
