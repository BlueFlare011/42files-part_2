/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:05:03 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/08 13:49:34 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1 = ClapTrap("Clapi");
	ClapTrap clap2 = ClapTrap("Trapi");

	std::cout << std::endl << "   READY GO!" << std::endl << "\\_____________/" << std::endl << std::endl;
	clap1.attack(clap2.getName());
	clap1.takeDamage(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.beRepaired(2);
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.attack(clap2.getName());
	clap1.takeDamage(200);
	clap1.beRepaired(1);
	std::cout << std::endl << "/-------------\\" << std::endl << "   G A M E !" << std::endl << std::endl;
	std::cout << "¡" << clap2.getName() << " Wins!" << std::endl << std::endl;
	return (0);
}