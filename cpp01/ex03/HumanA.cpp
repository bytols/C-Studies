/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:05:04 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 09:46:33 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include "./Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), equipment(weapon)
{
    return ; 
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->equipment.getType() << std::endl;
}
