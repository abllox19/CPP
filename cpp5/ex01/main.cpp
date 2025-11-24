/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/11/21 20:43:25 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
   
   Bureaucrat c1("bob", 150);
   Form f("tab", 8, 1);
   std::cout << f << std::endl;

   try
   {
      c1 = Bureaucrat("Bob", 3);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur attrapée dans main : " << e.what() << std::endl;
   }

   
   std::cout << c1 << std::endl;
   try
   {
      f.beSigned(c1);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }

   c1.upgrade();
   std::cout << c1 << std::endl;
   c1.upgrade();
   f.beSigned(c1);
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;
}