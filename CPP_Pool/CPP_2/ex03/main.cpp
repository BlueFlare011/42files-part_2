/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:03:59 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:04:01 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point p1(-8.0f, -8.0f), p2(8.0f, -8.0), p3(0.0f, 8.0f);
	Point rout(-10.0f, 0.0f), rin(2.0f, 2.0f);

	std::cout << "p1: (-8, -8) p2: (8, -8) p3: (0, 8)" << std::endl;
	std::cout << "El punto (-10, 0) esta:" << std::endl;
	
	if (bsp(p1, p2, p3, rout)){
		std::cout << "Dentro" << std::endl;
	}else{
		std::cout << "Fuera" << std::endl;
	}

	std::cout << "El punto (2, 2) esta:" << std::endl;
	
	if (bsp(p1, p2, p3, rin)){
		std::cout << "Dentro" << std::endl;
	}else{
		std::cout << "Fuera" << std::endl;
	}

	return (0);
}
