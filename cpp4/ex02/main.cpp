/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:12:37 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:12:37 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include <cstdlib>
#include <stdio.h>


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
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

// int main()
// {

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*meta[10];
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i % 2)
// 		{
// 			meta[i] = new Cat();
// 			if (meta[i] == NULL)
// 			{
// 				perror("Cat allocation failed");
// 				std::cerr << "Exiting process now";
// 				exit(1);
// 			}
// 		}
// 		else
// 		{
// 			meta[i] = new Dog();
// 			if (meta[i] == NULL)
// 			{
// 				perror("Dog allocation failed");
// 				std::cerr << "Exiting process now";
// 				exit(1);
// 			}
// 		}
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		std::cout << std::endl;
// 		std::cout << "Animal _type: " << meta[i]->getType() << std::endl;
// 		meta[i]->makeSound();
// 		std::cout << std::endl;
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	for (int i = 0; i < 10; i++)
// 		delete(meta[i]);

// //THIS PART IS FOR TESTING DEEP COPY ↓

// 	std::cout << std::endl << std::endl;
// 	std::cout << "#### showing that the copy constructor creates a deep copy ####" << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	Dog *a = new Dog();
// 	// Cat *a = new Cat();
// 	if (a == NULL)
// 	{
// 		perror("Allocation failed");
// 		std::cerr << "Exiting the process now." << std::endl;
// 		exit(1);
// 	}

// 	Dog *b = new Dog(*a);
// 	// Cat *b = new Cat(*a);
// 	if (b == NULL)
// 	{
// 		perror("Allocation failed");
// 		std::cerr << "Exiting the process now." << std::endl;
// 		exit(1);
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting a\033[0m" << std::endl;
// 	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
// 	a->getIdeas();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
// 	delete(a);
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting b\033[0m" << std::endl;
// 	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
// 	b->getIdeas();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
// 	delete(b);

// 	return (0);
// }
