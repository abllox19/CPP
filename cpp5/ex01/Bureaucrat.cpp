#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int ngrade) : name(name)
{
    try {
        if (ngrade < 1)
            GradeTooHighException();
        if (ngrade > 150)
            GradeTooLowException();

        grade = ngrade;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
        throw; // en général on relance l’exception
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : name(other.name), grade(other.grade)
{
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade = rhs.grade;

	return *this;
}

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
    try
    {
        if (grade - 1 < 1)
            GradeTooHighException();

        grade--;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur to upgrade : " << e.what() << std::endl;
    }
}

void Bureaucrat::downgrade()
{
    try
    {
        if (grade + 1 > 150)
            GradeTooLowException();

        grade++;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur to downgrade : " << e.what() << std::endl;
    }
}

void Bureaucrat::GradeTooHighException()
{
    throw std::out_of_range("votre grade est trop haut");
}

void Bureaucrat::GradeTooLowException()
{
    throw std::out_of_range("votre grade est trop bas");
}

std::ostream &operator<<(std::ostream& os, Bureaucrat& rhs)
{
    os << "bureaucrat name : " << rhs.get_name() << " | bureaucrat grade : " << rhs.get_grade();
    return os;
}