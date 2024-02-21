#include "Harl.hpp"

Harl::Harl() {
	this->array[0] = &Harl::debug;
	this->array[1] = &Harl::info;
	this->array[2] = &Harl::warning;
	this->array[3] = &Harl::error;
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;

	while (i < this->NUM_LEVELS){
		if (!this->levels[i].compare(level)){
			(this->*array[i])();
			break;
		}
		i++;
	}
	if (i == this->NUM_LEVELS)
		std::cout << "Not level found" << std::endl;
}