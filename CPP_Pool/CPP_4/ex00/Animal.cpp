/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:40:10 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:41:01 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	this->type = "-";
}

Animal::Animal(const Animal & animal)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	(*this) = animal;
}

Animal & Animal::operator= (const Animal & animal)
{
	std::cout << "Animal Copy Assingment Constructor Called" << std::endl;
	this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;	
}

const std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "<Animal Sound>" << std::endl;
}
