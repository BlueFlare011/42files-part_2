#include "Animal.hpp"

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal & animal)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = animal;
}

Animal & Animal::operator=(const Animal & animal)
{
	std::cout << "Animal Copy Assignment Constructor Called" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType()
{
	return this->type;
}