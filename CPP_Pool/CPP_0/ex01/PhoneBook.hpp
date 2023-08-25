#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define MAX_LEN 8

class PhoneBook
{
	private:
		Contact contact[MAX_LEN];
	public:
		PhoneBook(Contact contact[MAX_LEN]);
		~PhoneBook(void);
		void	addContact(void);
		void	searchContact(void);
};


#endif