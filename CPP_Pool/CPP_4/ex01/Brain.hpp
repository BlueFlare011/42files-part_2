#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas [100];
		int	index;
	public:
		Brain();
		Brain(const Brain & brain);
		Brain & operator= (const Brain & brain);
		~Brain();

		void	learn(std::string cell);
		void	forget();
		void	remember();
};

#endif