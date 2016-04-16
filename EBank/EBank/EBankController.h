#include <iostream>
#include <string>
#include<conio.h>
#include <vector>
#include "account.h"

using namespace std;

#ifndef EBankController_H
#define EBankController_H



class EbankController {



public:
	
	int option2 = 0;
	int option3 = 0;
	int option4 = 0;
	int accountGen = 0;
	int accountNum;
	double amou;
	double bal;
	string fName;
	string sName;
	string customerAddress;
	string aType;




	void createAccount();

	void deposit();

	void withdraw();

	void viewAccount();

	void updateAccountDetails();

	void viewAllCustomerAccounts();

	void mergeSortAccounts();


	void insertionSortAccounts();

	void exit();


};






















#endif EBankController_H