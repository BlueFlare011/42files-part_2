/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:40:16 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:40:59 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat & cat) : Animal(cat)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat & Cat::operator= (const Cat & cat)
{
	std::cout << "Cat Copy Assingment Constructor Called" << std::endl;
	Animal::operator= (cat);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "😺 Miau Miau 😺" << std::endl;
}