/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:27:58 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/07 15:32:49 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << checkAmount();
	std::cout << ";closed"<< std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t	tt;
	struct tm * ti;

	time(&tt);
	ti = localtime(&tt);
	std::cout << "[" <<(ti->tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << ti->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << ti->tm_mday << "_";
	std::cout << ti->tm_hour << ti->tm_min << ti->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << checkAmount();
	_amount += deposit;
	_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << checkAmount();
	std::cout << ",nb_deposit:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return 1;
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << checkAmount();
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << checkAmount();
		std::cout << ",nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return 0;


}

int	Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}