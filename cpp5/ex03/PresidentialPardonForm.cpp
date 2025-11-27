#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


void PresidentialPardonForm::run_forms(Bureaucrat client)
{
    if (!get_is_sign() || get_sign_by() != client.get_name())
        throw std::out_of_range("vous n'avez pas signer ce contrat");
    if (client.get_grade() > get_lvl_run())
        client.GradeTooLowException();

    std::cout << client.get_name() << " execute " << get_name() << std::endl;

    std::cout << client.get_name() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}