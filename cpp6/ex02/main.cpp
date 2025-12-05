/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:41:58 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/05 20:10:08 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	std::srand(std::time(0));
    int random = std::rand();
	random %= 3;
    if (random == 1)
		return (new B);
    else if (random == 2)
		return (new A);
	else
		return (new C);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try { (void)dynamic_cast<A&>(p); std::cout << "A" << std::endl; return; }
    catch(...) {}

    try { (void)dynamic_cast<B&>(p); std::cout << "B" << std::endl; return; }
    catch(...) {}

    try { (void)dynamic_cast<C&>(p); std::cout << "C" << std::endl; return; }
    catch(...) {}
}

int main()
{
    Base *base;

    base = generate();
    identify(base);
    identify(*base);
}