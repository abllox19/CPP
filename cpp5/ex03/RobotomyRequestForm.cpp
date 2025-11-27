#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::run_forms(Bureaucrat client)
{
    if (!get_is_sign() || get_sign_by() != client.get_name())
        throw std::out_of_range("vous n'avez pas signer ce contrat");
    if (client.get_grade() > get_lvl_run())
        client.GradeTooLowException();

    std::cout << client.get_name() << " execute " << get_name() << std::endl;
    
    std::srand(std::time(0));
    int random = std::rand();
    if (random % 2)
		std::cout << "BRRRRRRRRRRRRRR\n" << client.get_name() << " was robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}
