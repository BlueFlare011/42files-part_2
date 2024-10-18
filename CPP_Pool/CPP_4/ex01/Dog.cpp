#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog & Dog::operator= (const Dog & dog)
{
	std::cout << "Dog Copy Assingment Constructor Called" << std::endl;
	Animal::operator= (dog);
	*this->brain = *dog.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "🐶 Guau Guau 🐶" << std::endl;
}

void Dog::learnSomething(std::string idea)
{
	this->brain->learn(idea);
}

void Dog::forgetSomething()
{
	this->brain->forget();
}

void Dog::rememberSomething()
{
	this->brain->remember();
}