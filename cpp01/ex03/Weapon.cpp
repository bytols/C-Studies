/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 23:28:43 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 09:37:49 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon)
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

const   std::string &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string value)
{
    this->type = value;
}