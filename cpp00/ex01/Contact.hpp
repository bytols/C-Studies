/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:20:46 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/15 22:53:44 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

    public:
        Contact(void);
        Contact(std::string first_name, std::string last_name, std::string nick,
        std::string num, std::string sec);
        ~Contact(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_number(void);
        std::string get_secret(void);

    private:

        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string number;
        std::string secret;

};

#endif