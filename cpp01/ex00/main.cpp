/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/16 22:37:57 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(int argc, char *argv[])
{
    Zombie first_undead("derick");
    first_undead.announce();
    std::cout << "Im so sad, where are my friends?" << std::endl;
    if (argc < 2){
        std::cout << "i have no friends! ;-;" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::cout << "hey, im friend number: " << i << std::endl;
        first_undead.randomChump(argv[i]);
    }
    return (0);
    
}