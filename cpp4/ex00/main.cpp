/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:30 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:30 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    return 0;
}

// int main()
// {
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*meta = new Animal();
// 	std::cout << std::endl;
// 	std::cout << "\033[34mTesting\033[0m" << std::endl;

// 	std::cout << "Animal _type: " << meta->getType() << std::endl;
// 	meta->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete meta;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*catto = new Cat();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "Cat _type: " << catto->getType() << std::endl;
// 	catto->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete catto;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*doggo = new Dog();
// 	std::cout << std::endl;
// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
// 	doggo->makeSound();
// 	std::cout << std::endl;
// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete doggo;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const WrongAnimal	*wrong_meta = new WrongAnimal();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "Animal _type: " << wrong_meta->getType() << std::endl;
// 	wrong_meta->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete wrong_meta;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const WrongAnimal	*wrong_catto = new WrongCat();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "WrongCat _type: " << wrong_catto->getType() <<std::endl;
// 	wrong_catto->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete wrong_catto;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const WrongCat	*wrong_catta = new WrongCat();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "WrongCat _type: " << wrong_catta->getType() <<std::endl;
// 	wrong_catta->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete wrong_catta;
// 	std::cout << std::endl;

// 	return (0);
// }
