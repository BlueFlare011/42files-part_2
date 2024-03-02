#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1 = ClapTrap("Pepito");

	clap1.attack("Jilito");
	clap1.takeDamage(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.attack("Jilito");
	clap1.attack("Jilito");
	clap1.attack("Jilito");
	clap1.attack("Jilito");
	clap1.attack("Jilito");
	clap1.attack("Jilito");
	clap1.attack("Jilito");
	clap1.takeDamage(200);
	clap1.beRepaired(1);
	return (0);
}