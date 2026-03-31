/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 22:49:39 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 23:26:25 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	harl;

	std::cout << "Debug:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "Info:" << std::endl;;
	harl.complain("INFO");
	std::cout << std::endl << "Warning:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "Error:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "Invalid Level Test: " << std::endl;
	harl.complain("test");
	return (0);
}
