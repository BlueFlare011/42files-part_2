/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:24:50 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:26:22 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ClapTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap();
		DiamondTrap(const DiamondTrap & DiamondTrap);
		~DiamondTrap();
		DiamondTrap & operator=(const DiamondTrap & DiamondTrap);
		void attack(const std::string & target);
		void highFivesGuys(void);
};

#endif