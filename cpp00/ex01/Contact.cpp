/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:20:42 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/15 21:29:33 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nick,
     std::string num, std::string sec) : f_name(first_name) , l_name(last_name), n_name(nick), number(num), secret(sec     )
{
    return ;
}
Contact::Contact(void)
{ 
    return ;
}

Contact::~Contact(void)
{
    std::cout << "Closing Contact" << std::endl; 
    return ;
}

std::string Contact::get_first_name(void)
{
    return (this->f_name);
}

std::string Contact::get_last_name(void)
{
    return (this->l_name);
}

std::string Contact::get_nickname(void)
{
    return (this->n_name);
}

std::string Contact::get_number(void)
{
    return (this->number);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}






