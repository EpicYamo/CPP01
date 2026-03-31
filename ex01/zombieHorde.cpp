/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:55:17 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 20:10:23 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i;
	
	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i] = Zombie(name);
		i++;
	}
	return (horde);
}
