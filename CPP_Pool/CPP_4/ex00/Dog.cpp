/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:40:22 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:40:58 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog & Dog::operator= (const Dog & dog)
{
	std::cout << "Dog Copy Assingment Constructor Called" << std::endl;
	Animal::operator= (dog);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "🐶 Guau Guau 🐶" << std::endl;
}