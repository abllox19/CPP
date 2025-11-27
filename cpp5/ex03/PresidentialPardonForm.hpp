#pragma once

#include <fstream>
#include <cstdlib>
#include <ctime>

#include "AForm.hpp"


class PresidentialPardonForm: public Form
{
public:
    PresidentialPardonForm(std::string name);
    ~PresidentialPardonForm();

    void run_forms(Bureaucrat cient);
};


