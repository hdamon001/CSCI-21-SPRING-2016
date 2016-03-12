#include "savings.h"

Savings::Savings(float balance, float interest, string pin, int withdrawal)
{
    setBalance(balance);
    setInterest(interest);
    setPin(pin);
    withdrawal_=withdrawal;
}

Savings::~Savings()
{
    
}

void Savings::setWithdrawals(int withdrawal)
{
    withdrawal_=withdrawal;
}

bool Savings::getWithdrawals()
{
    return Withdrawal_;
}

void Savings::withdraw(float amount)
{
    balance=getBalance() - amount;
    if (amount > getBalance())
    {
        cout<<"Insufficient Funds\n";
    }
    else
    {
        setBalance(balance);
        setWithdrawals(getWithdrawals() + 1);
        if (getWithdrawals()>=5)
        {
            setBalance(balance - 10.00);
        }
    }
}

void Savings::deposit(float amount)
{
    setBalance(getBalance() + amount);
}

string Savings::accInfo()
{
    stringstream info;
    info<<"Balance:\n$"<<getBalance()<<"\nInterest Rate:\n"<<getInterest()<<"\nNumber of Withdrawals:\n"<<getWithdrawals()<<endl;
}