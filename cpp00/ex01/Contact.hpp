/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-13 23:20:46 by erocha-l          #+#    #+#             */
/*   Updated: 2026-01-13 23:20:46 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

    public:

        Contact(void);
        ~Contact(void);
        std::string get_first_name();

    private:

        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string number;
        std::string secret;
};

#endif