/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:09:25 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 02:18:41 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(void)
{
    this->_nbAccounts = 0;
    this->_totalAmount = 0;
    this->_totalNbDeposits = 0;
    this->_totalNbWithdrawals = 0;
    this->_accountIndex = 0;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
    this->_nbAccounts = 0;
    this->_totalAmount = 0;
    this->_totalNbDeposits = 1;
    this->_totalNbWithdrawals = 1;
    this->_accountIndex = 0;
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    this->_nbWithdrawals = 1;
}

Account::~Account(void)
{
}

int Account::getNbAccounts(void)
{
    return (this->_nbAccounts);
}




