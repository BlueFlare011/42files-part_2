/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:26:34 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/16 20:08:43 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->name = this->ClapTrap::name;
	this->FragTrap::hitPoints;
	this->ScavTrap::energyPoints;
	this->FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamondTrap)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	this->name = diamondTrap.name;
	this->hitPoints = diamondTrap.hitPoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & diamondTrap)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	this->name = diamondTrap.name;
	this->hitPoints = diamondTrap.hitPoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
	return (*this);
}
		
std::string	DiamondTrap::clapTrapName(void)
{
	return this->ClapTrap::name;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: " + this->name + "and my grandfather's name is: " + this->ClapTrap::name;
}
