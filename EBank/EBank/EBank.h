#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

#include "account.h"
#include "EBankController.h"

using namespace std;


static int option = 0;



static vector<Account> accounts;
 static EbankController* eBankController = new EbankController();

#ifndef EBank_H
#define EBank_H

void mainMenu();




#endif EBank_H