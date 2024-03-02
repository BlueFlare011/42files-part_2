#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav1 = ScavTrap("Kibito");

	scav1.attack("Jilito");
	scav1.takeDamage(2);
	scav1.beRepaired(2);
	scav1.beRepaired(2);
	scav1.beRepaired(2);
	scav1.attack("Jilito");
	scav1.attack("Jilito");
	scav1.attack("Jilito");
	scav1.attack("Jilito");
	scav1.attack("Jilito");
	scav1.attack("Jilito");
	scav1.attack("Jilito");
	scav1.guardGate();
	scav1.takeDamage(200);
	scav1.beRepaired(1);
	return (0);
}