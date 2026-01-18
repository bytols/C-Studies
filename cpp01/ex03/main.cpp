/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 09:40:13 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(&club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}