/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/18 21:00:59 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int     check_if_is_match(std::string start, std::string match, int str_len,)
{
    
}

void    swap_string(std::ifstream &file,  std::ofstream &copyf,std::string find, std::string replace)
{
    std::string line;
    int len = find.size();
    
    while (std::getline(file, line))
    {
        int not_found = 0;
        while(not_found == 0)
        {
            line.find(find, len);
        }
    }
    return ;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return ;
    
    std::ofstream cpyfile(std::string(argv[1]) +".filename");
    std::ifstream file(argv[1]);
    if ((!file.is_open()))
    {
        std::cerr << "error opening the file!" << std::endl; //check for other error are been writing in the right stream
        return ;
    }
    swap_string(file, cpyfile, argv[2], argv[3]);
    file.close();
    return (0);
}