/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:31:58 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/29 15:11:17 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_nbAccounts = initial_deposit;
}

int	Account::getNbAccounts()
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount()
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits()
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	std::cout << Account::getNbAccounts() << Account::getTotalAmount() << Account::getNbDeposits() << Account::getNbWithdrawals() << std::endl;
}

Account::~Account( void )
{
	std::cout << "closed" << std::endl;
}