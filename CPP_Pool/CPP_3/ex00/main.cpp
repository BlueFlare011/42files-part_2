#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1 = ClapTrap("Clapi");
	ClapTrap clap2 = ClapTrap("Trapi");

	std::cout << std::endl << "   READY GO!" << std::endl << "\\_____________/" << std::endl << std::endl;
	clap1.attack(clap2.getName());
	clap1.takeDamage(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.takeDamage(200);
	clap1.beRepaired(1);
	std::cout << std::endl << "/-------------\\" << std::endl << "   G A M E !" << std::endl << std::endl;
	std::cout << "¡" << clap2.getName() << " Wins!" << std::endl << std::endl;
	return (0);
}