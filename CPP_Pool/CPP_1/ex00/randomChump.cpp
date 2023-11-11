#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	myZombie(name);	// Alloc in stack

	myZombie.announce();
}