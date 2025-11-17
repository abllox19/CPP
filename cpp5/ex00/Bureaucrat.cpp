#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {}

Bureaucrat::~Bureaucrat() {}

// getter

std::string Bureaucrat::get_name(void)
{
    return name;
}

int Bureaucrat::get_grade(void)
{
    return grade;
}


void Bureaucrat::upgrade()
{

}

void Bureaucrat::downgrade()
{
    
}



void Bureaucrat::GradeTooHighException()
{
    std::cout << "votre grade ne peux pas augmenter" << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
    std::cout << "votre grade ne peux pas diminuer" << std::endl;
}