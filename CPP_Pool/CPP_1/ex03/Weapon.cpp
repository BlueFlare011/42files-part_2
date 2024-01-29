#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(){}

Weapon::~Weapon(){}

std::string const & Weapon::getType()
{
	std::string & ref = this->type;
	return ref;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
