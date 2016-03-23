#ifndef SAV_H
#define SAV_H

#include "bank.h"

class Savings: public Bank
{
    public:
     Savings();
     Savings(float balance = 0.00, float interest = 0.00, string pin = "0000", unsigned int withdrawals = 0);
     virtual ~Savings();
     void setWithdrawals(int withdrawals);
     int getWithdrawals();
     void  withdraw(float amount);
     void deposit(float amount);
     string accInfo();
     
    private:
     int nwithdrawals_;
};

#endif