#include "account.h"

//Default constructor overide, provides variables names and initialises account details using variables defined in EBankController
Account::Account(string fName, string sName, string addr, double bal, string type, int accNum) {
	firstName = fName;
	secondName = sName;
	balance = bal;
	accountType = type;
	accountNumber = accNum;
	address = addr;
}


// Implementation of deposit method, takes a parameter of type double called amount, this amount is then added to the current balance
void Account:: deposit(double amount) {
	balance += amount;
}

// Implementation of withdraw method, takes a parameter of type double called amount, this amount is then subtracted from the current balance
void Account::withdraw(double amount) {
	balance -= amount;
}

// Implementation of updateFirstName method, takes a parameter of type double string called newFname, the first name variable is then re-assigned
void Account::updateFirstName(string newFName) {
	firstName = newFName;
}

// Implementation of updateSecondName method, takes a parameter of type double string called newFname, the first name variable is then re-assigned
void Account::updateSecondName(string newSName) {
	secondName = newSName;
}

// Implementation of updateAddress method, takes a parameter of type double string called cAdress, the adress variable is then re-assigned
void Account::updateAddress(string cAddress) {
	address = cAddress;
}

// Implementation of changeAccountType method, takes a parameter of type double string called newAccountType, a value which is hardcoded in the controller
void Account::changeAccountType(string newAccountType) {
	accountType = newAccountType;
}

//Implementation of getBalance method, returns the double balance
double Account::getBalance()
{
	return balance;
}

//Implementation of getAccountType method, returns the string accountType
string Account::getAccountType() {
	return accountType;
}

//Implementation of getAccountNumber method, returns the integer accountNumber
int Account::getAccountNumber() {
	return accountNumber;
}

//Implementation of getSecondName method, returns the string secondName 
string Account::getSecondName() {
	return secondName;
}

//Implementation of getCustomerName method, concatenates and returns the first and second name of the customer
string Account::getCustomerName() {
	return firstName + ' ' + secondName;
}

//Implementation of getAddress method, returns the string address
string Account::getAddress() {
	return address;
}