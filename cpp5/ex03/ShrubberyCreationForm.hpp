#pragma once

#include <fstream>
#include <cstdlib>
#include <ctime>

#include "AForm.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string name);
    ~ShrubberyCreationForm();

    void run_forms(Bureaucrat cient);
};
