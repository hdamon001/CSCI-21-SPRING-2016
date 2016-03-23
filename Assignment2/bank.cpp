#include "bank.h"

Bank::Bank()
{
    
}

Bank::Bank(float balance, float interest, string pin)
{
    balance_=balance;
    interest_rate_=interest;
    pin_=pin;
}

Bank::~Bank()
{
    
}

void Bank::setBalance(float balance)
{
    balance_=balance;
}

void Bank::setInterest(float interest)
{
    interest_rate_=interest;
}

void Bank::setPin(string pin)
{
    pin_=pin;
}

float Bank::getBalance()
{
    return balance_;
}

float Bank::getInterest()
{
    return interest_rate_;
}

string Bank::getPin()
{
    return pin_;
}