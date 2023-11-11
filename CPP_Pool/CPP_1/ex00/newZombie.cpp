#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *myZombie = new Zombie(name);	//Alloc in heap
	return (myZombie);
}