#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Defualt Constructor called" << std::endl;
	this->name = "something";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap & clapTrap)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & clapTrap)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0){
		std::cout << "R.I.P " << this->name << " is dead X( ." << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " recived " << amount << " of damage, " << this->name << " has " << this->hitPoints << " hitpoints." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " repair itself by " << amount << " hitpoints, " << this->name << " has " << this->hitPoints << " hitpoints." << std::endl;
}
