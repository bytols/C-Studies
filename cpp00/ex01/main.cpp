/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:03:51 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/13 00:45:35 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>
#include "./main_header.hpp"
#include "./PhoneBook.hpp"



t_options choose_option()
{
    t_options result;
    std::string value;
    
    std::cout << "Chosse one of three options:" << std::endl;
    std::cout << "[ADD]" << std::endl;
    std::cout << "[SEARCH]" << std::endl;
    std::cout << "[EXIT]" << std::endl;
    std::cin >> value;
    
    if (value == "ADD")
    {
        std::cout << "entrei aqui\n" << std::endl;
        result = ADD;
    }
    else if (value == "SEARCH")
        result = SEARCH;
    else if (value == "EXIT")
        result = EXIT;
    else
        result = OTHER;
    return (result);
}

int main()
{ 
    t_options options;
    PhoneBook instance;

    std::cout << "Welcome to your phonebook!" << std::endl;
    while (1)
    {       
        options = choose_option();
        switch (options)
        {
            case ADD:
                std::cout << "escolhi ADD" << std::endl;
                continue;
            case SEARCH:
                std::cout << "escolhi SEARCH" << std::endl;
                continue;
            case EXIT:
                std::cout << "escolhi EXIT" << std::endl;
                return(0);
            default:
                std::cout << "escolhi nada" << std::endl;
                continue;
        }
    }
    return(0);
}