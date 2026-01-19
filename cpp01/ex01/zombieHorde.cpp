/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:16:34 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/17 23:21:33 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie *horde = new Zombie[N + 1];
    for (int i = 0; i < N; i++)
    {
        horde[i].name_zombie(name);
    }
    return(horde);
}
