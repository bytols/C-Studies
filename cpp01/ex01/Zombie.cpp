/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:45 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/17 23:13:18 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string z_name) : name(z_name)
{
    return ;
}

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << "Died... Rest in peace" << std::endl ;
    return ;
}

void    Zombie::name_zombie(std::string z_name)
{
    this->name = z_name;
}

void    Zombie::announce(void)
{
    std::cout << this->name << "BraiiiiiiinnnzzzZ..." << std::endl ;
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

