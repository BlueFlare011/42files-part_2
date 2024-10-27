#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Main Classes:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "Wrong Classes:" << std::endl << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();

	std::cout << std::endl << "Main Types:" << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	
	std::cout << std::endl << "Wrong Types:" << std::endl << std::endl;
	std::cout << wrong_meta->getType() << " " << std::endl;
	std::cout << wrong_i->getType() << " " << std::endl;

	std::cout << std::endl << "Main Sounds:" << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "Wrong Sounds:" << std::endl << std::endl;
	wrong_i->makeSound();
	wrong_meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	delete wrong_meta;
	delete wrong_i;
	return 0;
}
