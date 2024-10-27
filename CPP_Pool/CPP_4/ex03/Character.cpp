/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:39 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 12:43:19 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("-"), index(0)
{
	std::cout << "Character Default Constructor Called" << std::endl;
	for (int i = 0; i < MAX_SLOTS; i++)
		this->slots[i] = NULL;
	
}

Character::Character(std::string name) : name(name), index(0)
{
	std::cout << "Character Constructor Called" << std::endl;
	for (int i = 0; i < MAX_SLOTS; i++)
		this->slots[i] = NULL;
}

Character::Character(Character & character)
{
	std::cout << "Character Copy Constructor Called" << std::endl;
	*this = character;
}

Character & Character::operator= (Character & character)
{
	std::cout << "Character Copy Assingment Constructor Called" << std::endl;
	this->name = character.name;
	this->index = character.index;
	for (int i = 0; i < MAX_SLOTS; i++)
		this->slots[i] = character.slots[i];
	return (*this);
}

Character::~Character()
{
	std::cout << "Character Destructor Called" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->index < MAX_SLOTS){
		this->slots[this->index] = m;
		this->index++;
	}
}

void Character::unequip(int idx)
{
	if (this->index > 0 && (idx >= 0 && idx < this->index) && this->slots[idx]){
		for (int i = idx; i < this->index; i++){
			if (i < MAX_SLOTS)
				this->slots[i] = this->slots[i + 1];
			else
				this->slots[i] = NULL;
		}
		this->index--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->index && this->slots[idx]){
		this->slots[idx]->use(target);
	}
}
