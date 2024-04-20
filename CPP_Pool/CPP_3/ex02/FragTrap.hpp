#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap();
		FragTrap(const FragTrap & fragtrap);
		~FragTrap();
		FragTrap & operator=(const FragTrap & fragtrap);
		void attack(const std::string & target);
		void highFivesGuys(void);
};

#endif
