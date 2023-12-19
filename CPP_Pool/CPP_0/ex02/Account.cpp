#include "Account.hpp"
# include <iostream>

Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
}

Account::~Account(void){}

static int	getNbAccounts(void)
{
	return Account::_nbAccounts;
}

static int	getTotalAmount(void)
{
	return Account::_totalAmount;
}

static int	getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

static int	getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

static void	displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _accountIndex << ";total:" << _amount << ";deposits" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
}

void	makeDeposit( int deposit )
{

}

bool	makeWithdrawal( int withdrawal )
{

}

int		checkAmount(void) const
{

}

void	displayStatus(void) const
{

}
