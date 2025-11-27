/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/11/28 00:11:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
   
   Bureaucrat c1("bob", 150);
   ShrubberyCreationForm f("data");
   RobotomyRequestForm v("robot");
   PresidentialPardonForm p("president");
   std::cout << f << std::endl;

   try
   {
      c1 = Bureaucrat("Bob", 04);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur attrapée dans main : " << e.what() << std::endl;
   }

   
   std::cout << c1 << std::endl;
   try
   {
      v.beSigned(c1);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }

    try
   {
      p.beSigned(c1);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }
   c1.upgrade();
   std::cout << c1 << std::endl;
   c1.upgrade();
   try
   {
      f.beSigned(c1);
   }
   catch (const std::exception &e)
   {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }
   std::cout << c1 << std::endl;
   c1.upgrade();
   try
   {
      f.run_forms(c1);
   }
   catch (const std::exception &e)
   {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }
   
   try
   {
      v.run_forms(c1);
   }
   catch (const std::exception &e)
   {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }

   try
   {
      p.run_forms(c1);
   }
   catch (const std::exception &e)
   {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }
   std::cout << c1 << std::endl;
   c1.upgrade();
   std::cout << c1 << std::endl;

   std::cout << "ex 3" <<  std::endl;


   Intern someRandomIntern;
   Form *rrf;
   rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

   if (!rrf)
      return 0;   
   try
   {
      rrf->beSigned(c1);
   }
   catch (const std::exception &e) {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }
   try
   {
      rrf->run_forms(c1);
   }
   catch (const std::exception &e)
   {
        std::cerr << "Erreur grade for run : " << e.what() << std::endl;
   }
}