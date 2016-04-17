//Include c++ libraries
#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

//Include header files for account and EbankController .cpp files
#include "account.h"
#include "EBankController.h"

//Simplify cin and cout
using namespace std;

//Definition and Initialisation of option variable used for case statement in EBank.cpp
static int option = 0;


//Definition and Initialisation of a vector of type Account(Class)
static vector<Account> accounts;

//Definition initialisation of a new instance of the EbankController class
static EbankController* eBankController = new EbankController();

#ifndef EBank_H
#define EBank_H

//Definition of mainMenu method, for use in the Ebank.cpp file
void mainMenu();




#endif EBank_H