/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:48 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:43:18 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Ice Constructor Called" << std::endl;
}

Ice::Ice(void)
{
	std::cout << "Ice Default Constructor Called" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const & ice) : AMateria(ice)
{
	std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice & Ice::operator= (Ice const & ice)
{
	std::cout << "Ice Copy Assingment Constructor Called" << std::endl;
	AMateria::operator=(ice);
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor Called" << std::endl;
}

std::string const & Ice::getType() const 
{
	return (AMateria::getType());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria * aux = new Ice(*this);
	return(aux);
}