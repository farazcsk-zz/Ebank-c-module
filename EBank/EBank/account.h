// include c++ standard libraries 
#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

// Simplify cin and cout
using namespace std;

#ifndef account_H
#define account_H

// Account class definition, intialses variables to be stored in account and getter and setter methods which are then called from the control class
class Account
{
public:
	//Intialise variables or account details which are used in methods within the .cpp file
	double balance;
	string accountType;
	int accountNumber;
	string firstName;
	string secondName;
	string address;

	// Initalse deposit method allows the user to deposit into an account, takes a parameter of type double
	void deposit(double);

	// Initalse deposit method allows the user to withdraw from an account, takes a parameter of type double
	void withdraw(double);

	//Initalise the updateFirstName method, allows the user to update their first name and takes a parameter of type string
	void updateFirstName(string);

	//Initalise the updateSecondName method, allows the user to update their first name and takes a parameter of type string
	void updateSecondName(string);

	//Initalise the updateAdress method, allows the user to update their first name and takes a parameter of type string
	void updateAddress(string);

	//Initalise the updateAccountType method, allows the user to update their first name and takes a parameter of type string, the choices are hardcoded strings in the conroller
	void changeAccountType(string);

	//Initalise the getBalance method, allows the user to view the current balance of an account after entering their account number, returns the double balance
	double getBalance();

	//Initalise the get method, allows the user to update their first name and takes a parameter of type string
	string getAccountType();

	int getAccountNumber();

	string getSecondName();

	string getCustomerName();

	string getAddress();

	//Default contrustor for creating a new account, defines parameter types but not names
	Account::Account(string, string, string, double, string, int);

};



#endif // !
