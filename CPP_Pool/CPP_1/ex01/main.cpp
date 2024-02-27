#include "Zombie.hpp"
#define MAX 5

int main()
{
	Zombie *horde = zombieHorde(MAX, "Filipo");
	int i;
	
	if (!horde){
		std::cout << "zombie: Allocation error" << std::endl;
		return (1);
	}
	for (i = 0; i < MAX;i++){
		std::cout << i << "." << std::endl;
		horde[i].announce();
	}
	std::cout << std::endl;
	delete [] horde;
	return (0);
}