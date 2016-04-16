// EBank.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

#include "account.h"
#include "EBankController.h"
#include "EBank.h"

using namespace std;


void mainMenu() {
	
	
	
	cout << "************************************************************\n";
	cout << "                   WELCOME TO EBANK! :)\n";
	cout << "************************************************************\n";

	cout << "************************************************************\n";
	cout << "                  MAIN MENU:\n";
	cout << "************************************************************\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(1) Create Acount\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(2) Deposit\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(3) Withdraw\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(4) View Account\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(5) Update Account Details\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(6) View Accounts\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(7) Sort Customer Accounts By Balance(Merge Sort)\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(8) Sort Customer Accounts By Balance(Insertion Sort)\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(9) \n";

	cout << "--------------------------------------------------------------\n";

	cout << "Choose an option: \n";


	cin >> option;

	switch (option) {

		case 1:
			//create account
		
			system("CLS");
			eBankController->createAccount();
			system("PAUSE");
			break;


		
		case 2:
			// deposit
			system("CLS");
			eBankController->deposit();
			system("PAUSE");
			break;



		case 3:
			// withdraw

			system("CLS");
			eBankController->withdraw();
			system("PAUSE");
			break;


		case 4:
			// view account
			system("CLS");
			eBankController->viewAccount();
			system("PAUSE");
			break;



		case 5:
			// update account details
			system("CLS");
			eBankController->updateAccountDetails();
			system("PAUSE");
			break;



		case 6:
			// view all customer accounts
			system("CLS");
			eBankController->viewAllCustomerAccounts();
			system("PAUSE");
			break;


		case 7:
			system("CLS");
			eBankController->mergeSortAccounts();
			system("PAUSE");
			break;

		case 8:
			system("CLS");
			eBankController->insertionSortAccounts();
		
			system("PAUSE");
			break;


		case 9:
			system("CLS");
			eBankController->exit();
			system("PAUSE");
			break;
			
		


		

	}










	system("CLS");
	mainMenu();

}







int main(){

	mainMenu();

	

	

	_getch();
    
}


