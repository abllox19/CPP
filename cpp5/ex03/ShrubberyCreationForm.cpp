#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::run_forms(Bureaucrat client)
{
    if (!get_is_sign() || get_sign_by() != client.get_name())
        throw std::out_of_range("vous n'avez pas signer ce contrat");
    if (client.get_grade() > get_lvl_run())
        client.GradeTooLowException();

    std::cout << client.get_name() << " execute " << get_name() << std::endl;

    std::string m = client.get_name() + "_shrubbery";
    std::ofstream data(m.c_str());
    data << "          /\\\n         /**\\\n        /****\\\n       /******\\\n      /********\\\n     /**********\\\n    /************\\\n        ||||\n        ||||\n        ||||";
}
