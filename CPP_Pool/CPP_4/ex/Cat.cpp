#include "Cat.hpp"

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat & cat)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat & Cat::operator=(const Cat & cat)
{
	std::cout << "Cat Copy Assignment Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "Miau Miau" << std::endl;
}