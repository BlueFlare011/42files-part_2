/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:06:05 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/04 11:10:34 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap();
		FragTrap(const FragTrap & fragtrap);
		~FragTrap();
		FragTrap & operator=(const FragTrap & fragtrap);
		void attack(const std::string & target);
		void highFivesGuys(void);
};

#endif
