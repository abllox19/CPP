#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &cpy);
    ~Animal();

    Animal &operator=(const Animal&rhs);

    virtual void makeSound() const;
    const std::string &getType(void) const;
};


#endif