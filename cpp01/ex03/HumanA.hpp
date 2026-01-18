/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:05:08 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 09:46:35 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAMA_H_
#define __HUMAMA_H_
#include <string>
#include <iostream>
#include "./Weapon.hpp"

class HumanA{

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void);

    private:
        std::string name;
        Weapon &equipment;

};
#endif