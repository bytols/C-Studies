/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/17 23:12:46 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
    int zombies_N = 0;
    std::string name = "jhon";
    Zombie instance;
    Zombie *horde;
    
    horde = instance.zombieHorde(zombies_N, name);
    for (int i = 0; i < zombies_N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    
    return (0);
    
}