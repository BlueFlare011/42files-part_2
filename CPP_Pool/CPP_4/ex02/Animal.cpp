#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	this->type = "-";
}

Animal::Animal(const Animal & animal)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	(*this) = animal;
}

Animal & Animal::operator= (const Animal & animal)
{
	std::cout << "Animal Copy Assingment Constructor Called" << std::endl;
	this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;	
}

const std::string Animal::getType() const
{
	return this->type;
}