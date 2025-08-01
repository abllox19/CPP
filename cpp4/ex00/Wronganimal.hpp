#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &cpy);
    ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal&rhs);

    virtual void makeSound() const;
    const std::string &getType(void) const;
};


#endif