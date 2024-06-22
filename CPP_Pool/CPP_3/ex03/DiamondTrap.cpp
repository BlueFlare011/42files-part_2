/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:26:34 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/22 14:35:51 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("something_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->name = "something";
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = this->ScavTrap::energyPoints;
	this->attackDamage = this->FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = this->ScavTrap::energyPoints;
	this->attackDamage = this->FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamondTrap): ClapTrap(diamondTrap), FragTrap(), ScavTrap()
{
	this->name = diamondTrap.name;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & diamondTrap)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	ClapTrap::operator=(diamondTrap);
	ScavTrap();
	FragTrap();
	return (*this);
}

void	DiamondTrap::attack(const std::string & target)
{
	return (ScavTrap::attack(target));
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: " << this->name << " and my grandfather's name is: " << this->ClapTrap::name << std::endl;
}

std::string DiamondTrap::getName()
{
	return this->name;
}
