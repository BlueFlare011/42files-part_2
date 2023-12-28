#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define MAX 10

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif