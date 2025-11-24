#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &cpy);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat&rhs);

    // getter
    std::string get_name(void);
    int get_grade(void);

    // up and down

    void upgrade(void);
    void downgrade(void);

    // except

    void GradeTooHighException(void);
    void GradeTooLowException(void);
};

std::ostream &operator<<(std::ostream& os, Bureaucrat& rhs);