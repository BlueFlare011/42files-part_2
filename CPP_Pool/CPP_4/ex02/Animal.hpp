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
	Animal & operator= (const Animal & animal);
	virtual ~Animal();

	virtual const std::string getType() const;

	virtual void makeSound() const = 0;

	virtual void learnSomething(std::string idea) = 0;
	virtual void forgetSomething() = 0;
	virtual void rememberSomething() = 0;
};

#endif