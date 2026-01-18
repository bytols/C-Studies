/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:05:04 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 09:49:26 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"
#include "./Weapon.hpp"

HumanB::HumanB(std::string value) : name(value)
{
    return ; 
}

HumanB::~HumanB(void)
{
    return ;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->equipment->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon *new_weapon)
{
    this->equipment = new_weapon;
    return ;
}