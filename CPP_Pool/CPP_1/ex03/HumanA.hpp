#ifndef HUMANA_CPP
# define HUMANA_CPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanA();
	~HumanA();
	void attack();
};

#endif