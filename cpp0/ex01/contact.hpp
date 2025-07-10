/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:44:48 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/10 19:07:00 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <limits>

class contact
{
private:
    int id;
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string number;
    std::string darkest_secret;

public:
    void add(int i);
    void search(void);
    void print_all(void);

    // contact(int i);
// contact();
};

#endif