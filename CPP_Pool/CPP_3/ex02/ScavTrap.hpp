#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		ScavTrap(const ScavTrap & scavtrap);
		~ScavTrap();
		ScavTrap & operator=(const ScavTrap & scavtrap);
		void attack(const std::string & target);
		void guardGate();
};

#endif