#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "./Contact.hpp"

class PhoneBook {

public:

    PhoneBook(void);
    ~PhoneBook(void);
    void    add_contact(void);

private:

    Contact contacts[8];
    int next_index;    
};

#endif