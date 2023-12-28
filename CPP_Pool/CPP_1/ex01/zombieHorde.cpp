#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++){
		horde[i] = Zombie(name);
	}
	return (horde);
}