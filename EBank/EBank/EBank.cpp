// EBank.cpp : Defines the entry point for the console application.
//Include c++ libraies
#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

// Include header files for account, EBankController and Ebank .cpp files
#include "account.h"
#include "EBankController.h"
#include "EBank.h"

//Simplify cin and cout
using namespace std;

//Main menu  method which is called in the main method, outlines initial instruction for the user and calls methods in the EBankController Class
void mainMenu() {
	
	
	
	cout << "**************************************************************\n";
	cout << "                   WELCOME TO EBANK! :)\n";
	cout << "**************************************************************\n";

	cout << "**************************************************************\n";
	cout << "                       MAIN MENU:\n";
	cout << "**************************************************************\n";

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

	cout << "(7) Sort Customer Accounts By Balance(Insertion Sort)\n";

	cout << "--------------------------------------------------------------\n";

	cout << "(8) Exit Ebank\n";

	cout << "--------------------------------------------------------------\n";

	cout << "Choose an option: \n";

	//Request input from user
	cin >> option;

	// Choose a case based on the user input
	switch (option) {

		//Clear the screan, call the createAcccount method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 1:
			system("CLS");
			eBankController->createAccount();
			system("PAUSE");
			break;


		//Clear the screan, call the deposit method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 2:
			system("CLS");
			eBankController->deposit();
			system("PAUSE");
			break;


		//Clear the screan, call the withdraw method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 3:
			system("CLS");
			eBankController->withdraw();
			system("PAUSE");
			break;

		//Clear the screan, call the viewAcccount method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 4:
			system("CLS");
			eBankController->viewAccount();
			system("PAUSE");
			break;


		//Clear the screan, call the updateAccountDetails method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 5:
			system("CLS");
			eBankController->updateAccountDetails();
			system("PAUSE");
			break;


		//Clear the screan, call the viewAllCustomerAccounts method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 6:
			system("CLS");
			eBankController->viewAllCustomerAccounts();
			system("PAUSE");
			break;


		//Clear the screan, call the insertionSortAccounts method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 7:
			system("CLS");
			eBankController->insertionSortAccounts();
		
			system("PAUSE");
			break;

	//Clear the screan, call the exitApp method from the eBank controller instance, then pause to hold the window open until the user presses a key break from switch
		case 8:
			system("CLS");
			eBankController->exitApp();
			system("PAUSE");
			break;
			
		


		

	}









	//Clear the screen
	system("CLS");

	// Recursive algorithm, the main menu method is calling itself after a user has completed an action
	mainMenu();

}






//First method to be run in the program
int main(){

	//Call or run the mainMenu method
	mainMenu();

	

	
	//Expects input or holds the window open comes from conio.h
	_getch();
    
}


