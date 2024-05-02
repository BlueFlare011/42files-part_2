/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:06:06 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:06:07 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap1 = ClapTrap("Clapi");
	FragTrap frag1 = FragTrap("Froggi");

	std::cout << std::endl << "   READY GO!" << std::endl << "\\_____________/" << std::endl << std::endl;

	frag1.highFivesGuys();
	clap1.attack(frag1.getName());
	frag1.takeDamage(clap1.getAttackDamage());
	frag1.highFivesGuys();
	clap1.beRepaired(15);
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	clap1.attack(frag1.getName());
	frag1.takeDamage(clap1.getAttackDamage());
	clap1.attack(frag1.getName());
	frag1.highFivesGuys();
	std::cout << std::endl << "/-------------\\" << std::endl << "   G A M E !" << std::endl << std::endl;
	std::cout << "NO CONTEST" << std::endl;
	std::cout << frag1.getName() << " is too friendly to fight" << std::endl << std::endl;

	return (0);
}
