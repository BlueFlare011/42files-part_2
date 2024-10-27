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
	virtual Animal & operator= (const Animal & animal);
	virtual ~Animal();

	virtual const std::string getType() const;

	virtual void makeSound() const;

	virtual void learnSomething(std::string idea);
	virtual void forgetSomething();
	virtual void rememberSomething();
};

#endif