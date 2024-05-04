/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:26:34 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/04 13:10:40 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}


DiamondTrap()
{

}

DiamondTrap(const DiamondTrap & DiamondTrap)
{

}

~DiamondTrap()
{

}

DiamondTrap & operator=(const DiamondTrap & DiamondTrap)
{

}
		
std::string clapTrapName(void)
{

}

void		whoAmI(void)
{
	
}
