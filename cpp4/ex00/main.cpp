#include "animal.hpp"
#include "Wronganimal.hpp"
#include "dog.hpp"
#include "Wrongcat.hpp"
#include "cat.hpp"

// int main()
// {
//     dog chien;
//     cat chat;
//     animal  am("an");

//     std::cout << chien.getType() << std::endl;
//     std::cout << chat.getType() << std::endl;
//     am.makeSound();
//     chat.makeSound();
//     chien.makeSound();
// }

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    return 0;
}
