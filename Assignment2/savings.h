#ifndef SAV_H
#define SAV_H

#include "bank.h"

class Savings: public Bank
{
    public:
     Savings(float balance = 0.00, float interest = 0.00, string pin = "0000",  int withdrawals = 0);
     virtual ~Savings();
     void setWithdrawals(int withdrawals);
     int getWithdrawals();
     void  withdraw(float amount);
     void deposit(float amount);
     string accInfo();
     
    private:
     int nwtihdrawals_;
};

#endif