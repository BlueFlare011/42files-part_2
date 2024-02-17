#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack();
};

#endif