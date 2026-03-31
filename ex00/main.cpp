/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:59:40 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 21:33:32 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heap_zombie;

	heap_zombie = newZombie("Heap Zombie");
	heap_zombie->announce();
	randomChump("Stack Zombie");
	delete heap_zombie;
	return (0);
}
