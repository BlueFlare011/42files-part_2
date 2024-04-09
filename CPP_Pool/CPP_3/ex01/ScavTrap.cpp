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
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & scavtrap)
{
	return(*this);
}

void ScavTrap::attack(const std::string & target)
{
	if (this->hitPoints <= 0){
		std::cout << "R.I.P " << this->name << " is dead X(" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0){
		std::cout << "No energy points left" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}