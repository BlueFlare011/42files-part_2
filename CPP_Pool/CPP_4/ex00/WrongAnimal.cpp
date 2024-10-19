/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:40:34 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:47:17 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	this->type = "Wrong -";
}

WrongAnimal::WrongAnimal(const WrongAnimal & wrongAnimal)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	(*this) = wrongAnimal;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal & wrongAnimal)
{
	std::cout << "WrongAnimal Copy Assingment Constructor Called" << std::endl;
	this->type = wrongAnimal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;	
}

const std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "<WrongAnimal Sound>" << std::endl;
}
