#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & animal);
	WrongAnimal & operator= (const WrongAnimal & animal);
	~WrongAnimal();

	const std::string getType() const;

	void makeSound() const;
};

#endif