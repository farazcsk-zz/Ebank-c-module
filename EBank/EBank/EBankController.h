//include c++ libraries and the header file for the account.cpp file
#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

#include "account.h"

using namespace std;

#ifndef EBankController_H
#define EBankController_H


//Class definition, contains methods which are to be called from the mainMenu method in Ebank.cpp, these methods print instructions and call methods in the account class
class EbankController {



	public:
		// Variables required in the .cpp file for user input, these are also used in the account constructor when creating a new class
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



		//Creates a new account class
		void createAccount();

		//Allows the user to deposit to a bank account
		void deposit();

		// Allows the user to withdraw funds from a bank account
		void withdraw();

		// Allows the user to search for and then view a bank account
		void viewAccount();

		//Allows the user to update their account details
		void updateAccountDetails();

		// View a customers accounts, search by last name
		void viewAllCustomerAccounts();

		// Sort the current balance of all a customers accounts, search by last name
		void insertionSortAccounts();

		//Close the Ebank application
		void exitApp();


};






















#endif EBankController_H