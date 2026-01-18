/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 23:29:08 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 09:37:49 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H_
#define __WEAPON_H_
#include <string>
#include <iostream>

class Weapon{
    public:

        Weapon(std::string weapon);
        ~Weapon();
        const   std::string &getType();
        void    setType(std::string value);
    
    private:
        std::string type;
};

#endif