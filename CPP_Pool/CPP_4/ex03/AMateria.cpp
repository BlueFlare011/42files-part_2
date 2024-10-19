/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:33 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:43:23 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Constructor Called" << std::endl;
	this->type = type;
}

AMateria::AMateria(void)
{
	std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(AMateria const & amateria)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
	*this = amateria;
}

AMateria & AMateria::operator= (AMateria const & amateria)
{
	std::cout << "AMateria Copy Assingment Constructor Called" << std::endl;
	this->type = amateria.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "A materia is used against " << target.getName() << std::endl;
}
