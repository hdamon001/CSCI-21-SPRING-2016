#include "checking.h"

Checking::Checking(float balance, float interest, string pin, bool overdraft)
{
    setBalance(balance);
    setInterest(interest);
    setPin(pin);
    overdraft_=overdraft;
}

Checking::~Checking()
{
    
}

void Checking::setOver(bool overdraft)
{
    overdraft_=overdraft;
}

bool Checking::getOver()
{
    return overdraft_;
}

void Checking::withdraw(float amount)
{
    float balance=getBalance() - amount;
    char over;
    if (amount>getBalance())
    {
        cout<<"Insufficient funds; withdrawing will incure overdraft fees.  Withdraw?"<<endl
            <<"Yes(Y) No(N)";
        cin>>over;
        while (over != 'Y' && over != 'N')
        {
            cout<<"Enter Y for yes or N for no\n";
            cin>>over
        }
        switch (over)
        {
            case 'Y':
             if (getOver()==true) {
                 setBalance(balance);
             }
             else {
                 setOver(true);
                 setBalance(balance - 35.0);
             }
             break;
            case 'N':
             break;
        }
    }
    else
    {
        setBalance(balance);
    }
}

void Checking::deposit(float amount)
{
    setBalance(getBalance() + amount);
}

string Checking::accInfo()
{
    stringstream info;
    info<<"Balance:\n$"<<getBalance()<<"\nInterest Rate:\n"<<getInterest()<<endl;
    return info.str();
}