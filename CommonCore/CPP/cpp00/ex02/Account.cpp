/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:19:34 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 22:18:18 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.hpp"

/*///////////////////////////////////////////////////////////////////////////////
/																				/
/								STATIC VARIABLES								/
/																				/
///////////////////////////////////////////////////////////////////////////////*/

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


/*///////////////////////////////////////////////////////////////////////////////
/																				/
/									DISPLAYS 									/
/																				/
///////////////////////////////////////////////////////////////////////////////*/

static void	displayTime( void )
{
	const time_t	current_time = time(0);
	tm				*local_time = localtime(&current_time);

	std::cout << "[";
	std::cout << 1900 + local_time->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + local_time->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << local_time->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << local_time->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << local_time->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << local_time->tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
	displayTime();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	displayTime();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}



/*///////////////////////////////////////////////////////////////////////////////
/																				/
/							CONSTRUCTOR/DESTRUCTOR								/
/																				/
///////////////////////////////////////////////////////////////////////////////*/

Account::Account( int initial_deposit )
{
	displayTime();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void )
{
	displayTime();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}


/*///////////////////////////////////////////////////////////////////////////////
/																				/
/									GETTERS										/
/																				/
///////////////////////////////////////////////////////////////////////////////*/

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}



/*///////////////////////////////////////////////////////////////////////////////
/																				/
/									FUNCTIONS									/
/																				/
///////////////////////////////////////////////////////////////////////////////*/

void	Account::makeDeposit( int deposit )
{
	displayTime();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";

	_amount += deposit;
	_nbDeposits++;

	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	displayTime();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";

	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_nbWithdrawals++;

	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}
