#include "account.h"

Account::Account(string fName, string sName, string addr, double bal, string type, int accNum) {
	firstName = fName;
	secondName = sName;
	balance = bal;
	accountType = type;
	accountNumber = accNum;
	address = addr;
}



void Account:: deposit(double amount) {
	balance += amount;
}

void Account::withdraw(double amount) {
	balance -= amount;
}

void Account::updateFirstName(string newFName) {
	firstName = newFName;

}
void Account::updateSecondName(string newSName) {
	secondName = newSName;

}

void Account::updateAddress(string cAddress) {
	address = cAddress;
}

void Account::changeAccountType(string newAccountType) {
	accountType = newAccountType;
}

double Account::getBalance()
{
	return balance;
}

string Account::getAccountType() {
	return accountType;
}

int Account::getAccountNumber() {
	return accountNumber;
}

string Account::getSecondName() {
	return secondName;
}

string Account::getCustomerName() {
	return firstName + ' ' + secondName;
}
string Account::getAddress() {
	return address;
}