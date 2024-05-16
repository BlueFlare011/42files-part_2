/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:39:03 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/16 20:07:59 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{

	DiamondTrap algo = DiamondTrap();

	std::cout << std::endl << "   READY GO!" << std::endl << "\\_____________/" << std::endl << std::endl;

	algo.getName();
	algo.ScavTrap::attack("target");


	std::cout << std::endl << "/-------------\\" << std::endl << "   G A M E !" << std::endl << std::endl;
	std::cout << "NO CONTEST" << std::endl;

	return (0);
}
