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
	
	if (strNew.empty() || strOrigin.empty()){
		std::cerr << "Error: " << "Args must be filled" << std::endl;
		return 1;
	}
	
	std::ifstream Reader(argv[1]);
	
	if (!Reader.is_open()){
		std::cerr << "Error: " << "Couldn't opening '" << file << "'" << std::endl;
		Reader.close();
		return 1;
	}
	
	std::ofstream Writer(file.append(".replace"));

	if (!Writer.is_open()){
		std::cerr << "Error: " << "Couldn't create '" << file.append(".replace") << "'"<< std::endl;
		Writer.close();
		Reader.close();
		return 1;
	}
	
	while (getline(Reader, outLine)) {
		outLine = replace(strOrigin, strNew, outLine);
		Writer << outLine << std::endl;
	}
	Writer.close();
	Reader.close();
	return 0;
}
