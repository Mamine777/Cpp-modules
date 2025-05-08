/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:11:55 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/04 13:02:53 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _displayTimestamp();
    _amount = initial_deposit;
    _accountIndex = _nbAccounts++;
    _totalAmount += _amount;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit
              << ";amount:" << _amount + deposit << ";nb_deposits:" << ++_nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";

    if (_amount - withdrawal < 0) {
        std::cout << "refused" << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;

    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    char timeString[20];
    struct tm* timeInfo;
    std::time_t currentTime;

    std::time(&currentTime);
    timeInfo = localtime(&currentTime);

    std::strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S] ", timeInfo);
    std::cout << timeString;
}
//getters & setters functions
int	Account::checkAmount(void) const{return _amount;}
int	Account::getNbAccounts(void) { return _nbAccounts;}
int	Account::getTotalAmount(void) {return _totalAmount;}
int	Account::getNbDeposits(void) {return _totalNbDeposits;}
int	Account::getNbWithdrawals(void) {return _totalNbWithdrawals;}
