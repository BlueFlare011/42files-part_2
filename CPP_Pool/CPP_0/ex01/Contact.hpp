#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact(void);
		~Contact(void);
		bool	createContact(void);
		void	parseContact(int i);
		void	printContact(void);
};

#endif