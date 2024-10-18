#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	this->type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat & wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat & WrongCat::operator= (const WrongCat & wrongcat)
{
	std::cout << "WrongCat Copy Assingment Constructor Called" << std::endl;
	WrongAnimal::operator= (wrongcat);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "I'm not a cat" << std::endl;
}