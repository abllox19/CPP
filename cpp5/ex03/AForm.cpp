#include "AForm.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int lvl_sing, int lvl_run) : name(name), lvl_run(lvl_run), lvl_signed(lvl_sing), is_signed(false) {}

Form::~Form() {}

// getter

std::string Form::get_name(void)
{
    return name;
}

std::string Form::get_sign_by(void)
{
    return sign_by;
}


bool Form::get_is_sign(void)
{
    return is_signed;
}

int Form::get_lvl_sing(void)
{
    return lvl_signed;
}

int Form::get_lvl_run(void)
{
    return lvl_run;
}


void Form::sign_form(Bureaucrat client)
{
    if (client.get_grade() > lvl_signed)
        client.GradeTooLowException();
    else
        is_signed = true;
}

void Form::beSigned(Bureaucrat client)
{
    try
    {
        sign_form(client);

        sign_by = client.get_name();
        std::cout << client.get_name() << " signed successfully form " << name << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << client.get_name() << " couldn't sign "<< name << " because : " << e.what() << '\n';
    }
    
}

void Form::run_forms(Bureaucrat client)
{
	(void)client;
}

std::ostream &operator<<(std::ostream& os, Form& rhs)
{
    os << "Form name : " << rhs.get_name() << " | Form is sign ? : " << rhs.get_is_sign() << " | Form lvl sign : " << rhs.get_lvl_sing() << " | Form lvl run : " << rhs.get_lvl_run();
    return os;
}