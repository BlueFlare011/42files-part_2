/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:05:56 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/04 11:10:46 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		ScavTrap(const ScavTrap & scavtrap);
		~ScavTrap();
		ScavTrap & operator=(const ScavTrap & scavtrap);
		void attack(const std::string & target);
		void guardGate();
};

#endif