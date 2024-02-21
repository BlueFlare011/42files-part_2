#include "Harl.hpp"

Harl::Harl() {
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger" << std::endl << "I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free" << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;

	while (i < this->NUM_LEVELS && this->levels[i].compare(level))
		i++;

	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}