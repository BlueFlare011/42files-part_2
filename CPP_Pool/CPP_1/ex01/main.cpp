#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(MAX, "Filipo");
	int i;
	
	if (!horde){
		std::cerr << "zombie: Allocation error" << std::endl;
		return (1);
	}
	for (i = 0; i < MAX;i++){
		std::cout << i << "." << std::endl;
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}