#include "PhoneBook.hpp"

void	printMenu(void)
{
	std::cout << "What the fuck you want:" << std::endl;
	std::cout << "1) Add contact:" << std::endl;
	std::cout << "2) Search contact" << std::endl;
	std::cout << "3) Exit" << std::endl;
}

int main(void)
{
	PhoneBook	agenda;
	std::string	command;
	int			i = 0;

	while (1)
	{
		printMenu();
		std::cin >> command;
		if (!command.compare("ADD")){
			agenda.addContact(&i);
			i++;
		}
		else if (!command.compare("SEARCH"))
			agenda.searchContact();
		else if (!command.compare("EXIT"))
			return 0;
	}
	return 0;
}
