#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "Main ex00:" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "Main Types:" << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl << "Main Sounds:" << std::endl << std::endl;
	i->makeSound();
	j->makeSound();

	
	std::cout << std::endl;
	delete i;
	delete j;


	std::cout << std::endl << "Main ex01:" << std::endl;
	Animal *zoo [10];
	for (int i = 0; i < 10; i++){
		if (i < 5)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();	
	}
	zoo[3]->learnSomething("Bark");
	for (int i = 0; i < 10; i++){
		std::cout << zoo[i]->getType() << " " << i << ":" << std::endl;
		zoo[i]->rememberSomething();
		if (i == 3)
			zoo[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete zoo[i];
	return 0;
}
