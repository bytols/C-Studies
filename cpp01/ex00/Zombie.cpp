/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:45 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/16 22:36:26 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string z_name) : name(z_name)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Died... Rest in peace" << std::endl ;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl ;
}

Zombie* Zombie::newZombie(std::string name )
{
    Zombie  *instance;

    instance = new Zombie(name);
    return (instance);
}

void Zombie::randomChump( std::string name )
{
    Zombie  *instance;

    instance = new Zombie(name);
    instance->announce();
    delete instance;
}

