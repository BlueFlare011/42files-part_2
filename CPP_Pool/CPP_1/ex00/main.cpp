#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("Eustaquio");
	Zombie *zombie2 = newZombie("Filipo");
	Zombie *zombie3 = newZombie("Perico");

	zombie1->announce();
	zombie2->announce();
	randomChump("Kurt Cobain");
	zombie3->announce();

	zombie1->~Zombie();
	zombie2->~Zombie();
	zombie3->~Zombie();
	return (0);
}