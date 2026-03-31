/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:59:43 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 19:37:21 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie	*newZombie( std::string name )
{
	Zombie	*heap_zombie;

	heap_zombie = new Zombie(name);
	return (heap_zombie);
}
