/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:54:45 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 23:13:31 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*horde;
	int		n;
	int		i;

	n = 5;
	horde = zombieHorde(n, "The Horde");
	i = 0;
	while (i < n)
	{
		std::cout << "Zombie " << i << ": ";
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
