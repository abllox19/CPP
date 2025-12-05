/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:41:58 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/04 19:07:06 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data ptr2;
	ptr2.i = 42;
	ptr2.next = NULL;

	Data ptr;
	ptr.i = 42;
	ptr.next = &ptr2;


	std::cout << "Here is the original structs:" <<
				"\n\taddress: " << &ptr <<
				"\n\tage: " << ptr.i <<
				"\n\taddress next: " << ptr.next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tage: " << ptr2.i <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	Data *ptr_copy = Serializer::deserialize(Serializer::serialize(&ptr));

	std::cout << "Here is the reserialized structs:" <<
				"\n\taddress: " << ptr_copy <<
				"\n\tage: " << ptr_copy->i <<
				"\n\taddress next: " << ptr_copy->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tage: " << ptr2.i <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	return (0);
}
