/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:05:22 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/08 14:49:30 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->_name = "something";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap & clapTrap)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & clapTrap)
{
	std::cout << "ClapTrap Copy Assignment Constructor called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "R.I.P \"" << this->_name << "\" is dead X(" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left" << std::endl;
	else{
		this->_energyPoints--;
		std::cout << "ClapTrap \"" << this->_name << "\" attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0){
		std::cout << "R.I.P \"" << this->_name << "\" is dead X( ." << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap \"" << this->_name << "\" recived " << amount << " of damage, " << this->_name << " has " << this->_hitPoints << " hitpoints." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "R.I.P \"" << this->_name << "\" is dead X(" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left" << std::endl;
	else{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap \"" << this->_name << "\" repair itself by " << amount << " hitpoints, " << this->_name << " has " << this->_hitPoints << " hitpoints." << std::endl;
	}	
}

std::string ClapTrap::getName (void)
{
	return (this->_name);
}

int ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}
