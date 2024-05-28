#include "Dog.hpp"

Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog & Dog)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog & Dog::operator=(const Dog & Dog)
{
	std::cout << "Dog Copy Assignment Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Guau Guau" << std::endl;
}