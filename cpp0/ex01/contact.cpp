#include "contact.hpp"

// contact::contact(int i)
// {
//     this->id = i;
// }

void print(std::string s)
{
    int i = 0;
    char retour[11];

    while (s[i] && i < 10)
    {
        retour[i] = s[i];
        i++;
    }
    if (s[i])
    {
        i--;
        retour[i++] = '.';
    }
    while (i != 11)
    {
        retour[i] = ' ';
        i++;
    }
    retour[i] = '\0';
	std::cout << retour;
}

size_t strlen(std::string str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

int is_num(std::string str)
{
    if (str == "")
        return 0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
            return 0;
    }
    return 1;
}

void contact::add(int i)
{
    this->id = i;

	std::cout << "donner un prenom : ";
    std::cin >> this->firstname;

	std::cout << "donner un nom : ";
    std::cin >> this->lastname;

	std::cout << "donner un surnom : ";
    std::cin >> this->nickname;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (1)
    {
        std::cout << "donner un numero : ";
        std::getline(std::cin, this->number);
		if (std::cin.eof() == true)
		{
			std::cout << "sorti de phonebook." << std::endl;
			break;
		}
        if (is_num(this->number))
            break;
        std::cout << "ce n'est pas un numero !" << std::endl;
    }

    std::cout << "donner le plus grand secret : ";
    std::getline(std::cin , this->darkest_secret);

	std::cout << "Merci."<< std::endl;
}

void contact::print_all(void)
{
    std::cout << "firstname            :" << this->firstname << std::endl;
    std::cout << "lastname             :" << this->lastname << std::endl;
    std::cout << "nickname             :" << this->nickname << std::endl;
	std::cout << "numero               :" << this->number << std::endl;
	std::cout << "le plus grand secret :" << this->darkest_secret << std::endl;
}

void contact::search(void)
{
	std::cout << this->id << "  | ";
    print(this->firstname);
	std::cout << " | ";
    print(this->lastname);
	std::cout << " | ";
    print(this->nickname);
	std::cout << std::endl;
}