#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <stdlib.h>
#include "./Contact.hpp"

class PhoneBook {

public:

    PhoneBook(void);
    ~PhoneBook(void);
    void    add_contact(void);
    void    search(void);

private:

    Contact contacts[8];
    int all_contacts;
    int book_index;   
    
    void    increment_index(void);
    int     get_index(void);
    int     get_all_contacts(void);
    int     check_valid_string(std::string str);
    int     check_valid_num(std::string str);

};

#endif