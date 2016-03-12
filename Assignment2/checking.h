#ifndef CHEC_H
#define CHEC_H

#include "bank.h"

class Checking: public Bank
{
    public:
     Checking(float balance = 0.00, float interest = 0.00, string pin = "0000", bool overdraft = false);
     virtual ~Checking();
     void setOver(bool over);
     bool getOver();
     void withdraw(float amount);
     void deposit(float amount);
     string accInfo();
     
    private:
     bool overdraft_;
};

#endif