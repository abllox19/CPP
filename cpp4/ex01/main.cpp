/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:14:37 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:14:37 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include <cstdlib>

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

	delete j;//should not create a leak
	delete i;
	delete meta;
    return 0;
}

// int main( void )
// {
// 	// Exercice example
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();

// 	std::cout << std::endl;

// 	delete dog;
// 	delete cat;
// 	system("leaks ex01");
// 	std::cout << std::endl;
// 	std::cout << std::endl;

// 	// Proof of deep copy
// 	Dog medor;
// 	Cat fifi;

// 	Dog & medor_ref = medor;
// 	Cat & fifi_ref = fifi;

// 	std::cout << std::endl << "creating copies" << std::endl;
// 	Dog medor_copy(medor_ref);
// 	Cat fifi_copy(fifi_ref);
	
// 	// Array of animals
// 	const Animal	*animal_array[4];
// 	std::cout << std::endl;
// 	// Half filled with dogs
// 	for (int i = 0; i < 2; i++)
// 	animal_array[i] = new Dog();
// 	std::cout << std::endl;
	
// 	// Half filled with cats
// 	for (int i = 2; i < 4; i++)
// 	animal_array[i] = new Cat();
// 	std::cout << std::endl;
	
// 	for (int i = 0; i < 4; i++)
// 	delete animal_array[i];
// 	std::cout << std::endl;
	
// 	system("leaks ex01");
// }