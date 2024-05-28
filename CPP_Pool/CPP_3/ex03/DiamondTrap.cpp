/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blueflare011 <blueflare011@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:26:34 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/28 18:55:50 by blueflare01      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("something_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->name = "something";
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = this->ScavTrap::energyPoints;
	this->attackDamage = this->FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = this->ScavTrap::energyPoints;
	this->attackDamage = this->FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamondTrap): ClapTrap(diamondTrap), ScavTrap(), FragTrap()
{
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
	std::cout << "My name is: " + this->name + " and my grandfather's name is: " + this->ClapTrap::name;
}
