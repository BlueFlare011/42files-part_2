/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:05:33 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/08 15:03:21 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap() : ClapTrap() 
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & scavtrap)
{
	ClapTrap::operator=(scavtrap);
	return(*this);
}

void ScavTrap::attack(const std::string & target)
{
	if (this->hitPoints <= 0)
		std::cout << "R.I.P \"" << this->name << "\" is dead X(" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << this->name << " has no energy points left" << std::endl;
	else{
		this->energyPoints--;
		std::cout << "ScavTrap \"" << this->name << "\" attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap \"" << this->name << "\" is now in Gate keeper mode." << std::endl;
}