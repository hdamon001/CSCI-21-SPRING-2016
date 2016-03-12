#include "bank.h"
#include "checking.h"
#include "credit.h"
#include "savings.h"

#include "bank.h"
#include "checking.h"
#include "credit.h"
#include "savings.h"


int ATM()
{
    Checking chec(12.34, 0.01, "1234", false);
    Credit cred(-12.34, 16.56, "3456", false);
    Savings sav(1234.56, 0.04, "4321", 0);
    
    chec.getBalance();
    cred.getBalance();
    sav.getBalance();
    
    chec.getPin();
    cred.getPin();
    sav.getPin();
    
    chec.getOver();
    cred.getPaid();
    sav.getWithdrawals();
    
    chec.accInfo();
    cred.accInfo();
    sav.accInfo();

    return 0;
}