#pragma once

#include <fstream>
#include <cstdlib>
#include <ctime>

#include "AForm.hpp"

class RobotomyRequestForm: public Form
{
public:
    RobotomyRequestForm(std::string name);
    ~RobotomyRequestForm();

    void run_forms(Bureaucrat cient);
};
