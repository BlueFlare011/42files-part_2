/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:41:16 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:41:44 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas [100];
		int	index;
	public:
		Brain();
		Brain(const Brain & brain);
		Brain & operator= (const Brain & brain);
		~Brain();

		void	learn(std::string cell);
		void	forget();
		void	remember();
};

#endif