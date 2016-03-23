#include "credit.h"

Credit::Credit()
{
    
}

Credit::Credit(float balance, float interest, string pin, bool paid)
{
    setBalance(balance);
    setInterest(interest);
    setPin(pin);
    paid_=paid;
}

Credit::~Credit()
{
    
}

void Credit::setPaid(bool paid)
{
    paid_=paid;
}

bool Credit::getPaid()
{
    return paid_;
}

void Credit::withdraw(float amount)
{
    float balance=getBalance() - amount;
    setBalance(balance);
}

void Credit::pay(float amount)
{
    setBalance(getBalance() + amount);
    if (getBalance()>=0)
    {
        setPaid(true);
    }
}

string Credit::accInfo()
{
    stringstream info;
    if (getPaid()==false)
    {
        float amount = abs(getBalance()) * (1 + getInterest()/12);
        info<<"Balance:\n$"<<getBalance()<<"\nInterest Rate:\n"<<getInterest()<<"\nAmount Owed:\n$"<<amount<<endl;
        
    }
    else
    {
        info<<"Balance:\n$"<<getBalance()<<"\nInterest Rate:\n"<<getInterest()<<"\nAmount Owed:\n$0.00\n";
    }
    return info.str();
}