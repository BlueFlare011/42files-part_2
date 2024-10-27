/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:41:28 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:58:23 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// I leave this here because the subjects
	std::cout << "Subject \"\"Test\"\":" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << "My Test:" << std::endl;
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
