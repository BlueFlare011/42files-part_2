#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain * brain;
public:
	Dog();
	Dog(const Dog & dog);
	Dog & operator= (const Dog & animal);
	~Dog();

	void makeSound() const;
	Dog & assign(const Dog & animal);

	void learnSomething(std::string idea);
	void forgetSomething();
	void rememberSomething();
};


#endif