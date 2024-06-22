/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:39:03 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/22 14:36:23 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clap = ClapTrap("Clapi");
	FragTrap frag = FragTrap("Froggi");
	ScavTrap scap = ScavTrap("Scapi");
	DiamondTrap diamond = DiamondTrap("Dialga");
	DiamondTrap test = diamond;

	std::cout << std::endl << "   READY GO!" << std::endl << "\\_____________/" << std::endl << std::endl;

	
	diamond.whoAmI();
	diamond.attack(clap.getName());
	clap.takeDamage(diamond.getAttackDamage());
	std::cout << "   <--->" << std::endl;
	scap.guardGate();
	scap.attack(diamond.getName());
	diamond.takeDamage(scap.getAttackDamage());
	scap.attack(diamond.getName());
	diamond.takeDamage(scap.getAttackDamage());
	diamond.guardGate();
	diamond.attack(scap.getName());
	diamond.attack(scap.getName());
	diamond.attack(scap.getName());
	diamond.attack(scap.getName());
	diamond.attack(scap.getName());
	scap.takeDamage(diamond.getAttackDamage() * 5);
	std::cout << "   <--->" << std::endl;
	frag.highFivesGuys();
	diamond.attack(frag.getName());
	frag.takeDamage(diamond.getAttackDamage());
	frag.attack(diamond.getName());
	diamond.takeDamage(frag.getAttackDamage());
	diamond.beRepaired(5);
	frag.attack(diamond.getName());
	diamond.takeDamage(frag.getAttackDamage());
	diamond.attack(frag.getName());
	diamond.attack(frag.getName());
	diamond.attack(frag.getName());
	diamond.attack(frag.getName());
	frag.takeDamage(diamond.getAttackDamage()*4);


	std::cout << std::endl << "/-------------\\" << std::endl << "   G A M E !" << std::endl << std::endl;
	std::cout << "¡" << diamond.getName() << " Wins!" << std::endl << std::endl;

	test.attack("Pingo");
	test.beRepaired(10);
	test.takeDamage(40);
	test.whoAmI();
	return (0);
}
