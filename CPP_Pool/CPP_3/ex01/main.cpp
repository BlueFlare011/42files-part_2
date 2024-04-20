#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap1 = ClapTrap("Clapi");
	ScavTrap scav1 = ScavTrap("Scapi");

	std::cout << std::endl << "   READY GO!" << std::endl << "\\_____________/" << std::endl << std::endl;

	clap1.attack(scav1.getName());
	scav1.takeDamage(clap1.getAttackDamage());
	clap1.takeDamage(5);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	scav1.beRepaired(15);
	scav1.guardGate();
	scav1.attack(clap1.getName());
	clap1.takeDamage(scav1.getAttackDamage());
	clap1.beRepaired(5);
	std::cout << std::endl << "/-------------\\" << std::endl << "   G A M E !" << std::endl << std::endl;

	std::cout << "¡" << scav1.getName() << " Wins!" << std::endl << std::endl;
	return (0);
}
