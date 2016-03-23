#include "savings.h"

Savings()
{
    
}

Savings::Savings(float balance, float interest, string pin, unsigned int withdrawal)
{
    setBalance(balance);
    setInterest(interest);
    setPin(pin);
    nwithdrawals_=withdrawal;
}

Savings::~Savings()
{
    
}

void Savings::setWithdrawals(int withdrawal)
{
    nwithdrawals_=withdrawal;
}

int Savings::getWithdrawals()
{
    return nwithdrawals_;
}

void Savings::withdraw(float amount)
{
    float balance=getBalance() - amount;
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