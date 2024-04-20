#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap() : ClapTrap() 
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & fragtrap)
{
	return(*this);
}

void FragTrap::attack(const std::string & target)
{
	if (this->hitPoints <= 0){
		std::cout << "R.I.P \"" << this->name << "\" is dead X(" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0){
		std::cout << this->name << " has no energy points left" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "FragTrap \"" << this->name << "\" attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap \"" << this->name << "\" says \"High Five man!!! What's up!!\"" << std::endl;
}
