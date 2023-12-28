#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanB();
	~HumanB();
	void attack();
};

#endif