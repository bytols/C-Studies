/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:03:44 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/11 13:03:46 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>


void string_upper(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
    return;
}

int main(int argc, char **argv) {

    int i;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (i < argc)
    {
        string_upper(argv[i]);
        i++;
    }
    std::cout << "\n";
    return (0);
}