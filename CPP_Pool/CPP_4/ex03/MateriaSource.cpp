/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:43:01 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 12:42:13 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
	this->index = 0;
	for (int i = 0; i < MAX_SLOTS; i++)
		this->slots[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource & materia)
{
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	*this = materia;
}

MateriaSource & MateriaSource::operator= (MateriaSource & materia)
{
	std::cout << "MateriaSource Copy Assingment Constructor Called" << std::endl;
	this->index = materia.index;
	for (int i = 0; i < MAX_SLOTS; i++)
		this->slots[i] = materia.slots[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called" << std::endl;
	for (int i = 0; i < this->index; i++)
		delete this->slots[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->index < MAX_SLOTS){
		this->slots[this->index] = materia;
		this->index++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (this->slots[i]->getType() != type && i < this->index)
		i++;
	if (i >= this->index)
		return (0);
	return (this->slots[i]);
}
