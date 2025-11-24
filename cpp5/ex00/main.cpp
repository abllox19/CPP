/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/11/21 20:30:40 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
   
   Bureaucrat c1("default", 150);
   Bureaucrat c2("bob", 150);
   
   try
   {
      c1 = Bureaucrat("Bob", 3);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur attrapée dans main : " << e.what() << std::endl;
   }

      try
   {
      c2 = Bureaucrat("Bob", 147);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur attrapée dans main : " << e.what() << std::endl;
   }

   
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;

   std::cout << c2 << std::endl;
   c2.downgrade();
   std::cout << c2 << std::endl;
   c2.downgrade();
   std::cout << c2 << std::endl;
   c2.downgrade();
   std::cout << c2 << std::endl;
   c2.downgrade();
   std::cout << c2 << std::endl;
}