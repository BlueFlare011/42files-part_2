#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
	const static int NUM_LEVELS = 4; 
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Harl::*array[NUM_LEVELS])(void);
	std::string levels[NUM_LEVELS];
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif