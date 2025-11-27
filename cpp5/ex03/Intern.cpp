#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {*this = src;}

Intern::~Intern() {}

static Form	*President(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*Robot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string create, std::string target_form)
{
	Form *(*all_forms[])(std::string target) = {&President, &Robot, &Shrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (create == forms[i])
		{
			std::cout << "Intern creates " << create << " now" << std::endl;
			return (all_forms[i](target_form));
		}
	}

	std::cout << "\033[33mIntern can not create a form called " << create << "\033[0m" << std::endl;
	return (NULL);
}
