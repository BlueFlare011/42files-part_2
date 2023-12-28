#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(MAX, "Filipo");
	int i;
	for (i = 0; i < MAX;i++)
		horde[i].announce();
	
	return (0);
}