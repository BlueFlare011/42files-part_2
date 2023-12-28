#include <iostream>

int main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;

	std::cout << &myString << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << myString << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


	return (0);
}