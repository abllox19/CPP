#pragma once

#include <fstream>
#include <cstdlib>
#include <ctime>

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string name);
    ~ShrubberyCreationForm();

    void run_forms(Bureaucrat cient);
};

class RobotomyRequestForm: public Form
{
public:
    RobotomyRequestForm(std::string name);
    ~RobotomyRequestForm();

    void run_forms(Bureaucrat cient);
};

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(std::string name);
    ~PresidentialPardonForm();

    void run_forms(Bureaucrat cient);
};


