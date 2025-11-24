#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int lvl_run;
    const int lvl_signed;
    bool is_signed;
    std::string sign_by;

public:
    Form(std::string name, int lvl_sing, int lvl_run);
    virtual ~Form();

    // getter
    std::string get_name(void);
    std::string get_sign_by(void);
    bool get_is_sign(void);
    int get_lvl_sing(void);
    int get_lvl_run(void);


    void sign_form(Bureaucrat client);
    void beSigned(Bureaucrat client);
};

std::ostream &operator<<(std::ostream& os, Form& rhs);
