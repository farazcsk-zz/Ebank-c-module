#include <iostream>
#include <string>
#include<conio.h>
#include <vector>

using namespace std;

#ifndef account_H
#define account_H
class Account
{
public:

	double balance;
	string accountType;
	int accountNumber;
	string firstName;
	string secondName;
	string address;


	void deposit(double);

	void withdraw(double);

	void updateFirstName(string);

	void updateSecondName(string);

	void updateAddress(string);

	void changeAccountType(string);

	double getBalance();

	string getAccountType();

	int getAccountNumber();

	string getSecondName();

	string getCustomerName();

	string getAddress();

	Account::Account(string, string, string, double, string, int);

};



#endif // !
