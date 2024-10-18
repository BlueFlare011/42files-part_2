#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat & cat) : Animal(cat)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = cat;
}

Cat & Cat::operator= (const Cat & cat)
{
	std::cout << "Cat Copy Assingment Constructor Called" << std::endl;
	Animal::operator= (cat);
	*this->brain = *cat.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "😺 Miau Miau 😺" << std::endl;
}

void Cat::learnSomething(std::string idea)
{
	this->brain->learn(idea);
}

void Cat::forgetSomething()
{
	this->brain->forget();
}

void Cat::rememberSomething()
{
	this->brain->remember();
}
