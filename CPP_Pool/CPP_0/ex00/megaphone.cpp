#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		argv++;
		while (*argv){
			while (**argv){
				std::cout << (char) toupper(**argv);
				(*argv)++;
			}
			argv++;
		}
	}
	return (0);
}