#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal & animal);
	Animal & operator=(const Animal & animal);
	~Animal();

	std::string getType();
	virtual void makeSound() = 0;

};

#endif