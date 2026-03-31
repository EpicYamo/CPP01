/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 20:46:43 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 21:31:46 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL), _weapon_flag(0)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (_weapon_flag == 1)
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " couldnt attack, they dont have a weapon to attack !" << std::endl;
}

void	HumanB::giveWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	_weapon_flag = 1;
}
