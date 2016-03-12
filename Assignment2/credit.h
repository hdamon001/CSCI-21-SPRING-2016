#ifndef CRED_H
#define CRED_H

#include "bank.h"

class Credit: public Bank
{
    public:
     Credit(float balance = 0.0, float interest = 0.0, string pin = "0000", bool paid = true);
     virtual ~Credit();
     void setPaid(bool paid);
     bool getPaid();
     void  withdraw(float amount);
     void pay(float amount);
     string accInfo();
     
    private:
     bool paid_;
};

#endif