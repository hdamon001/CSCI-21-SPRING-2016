/*
 * Hunter Damon
 * Assignment
 * item inheritance
 */
 
#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

class Bank
{
    public:
     Bank(float balance = 0.00, float interest = 0.00, string pin = "0000");
     virtual ~Bank();
     void setBalance(float balance);
     void setInterest(float interest);
     void setPin(string pin);
     float getBalance();
     float getInterest();
     string getPin();
     
    private:
     string pin_;
     float balance_;
     float interest_rate_;
};

#endif