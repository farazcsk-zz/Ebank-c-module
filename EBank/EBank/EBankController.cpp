#include "EBankController.h"
#include "EBank.h"

void EbankController:: createAccount() {
	cout << "************************************************************\n";
	cout << "                  CREATE ACCOUNT:\n";
	cout << "************************************************************\n";
	cout << "Please Select Account Type:\n";
	cout << "--------------------------------------------------------------\n";
	cout << "(1) Current Account\n";
	cout << "--------------------------------------------------------------\n";
	cout << "(2) Savings Account\n";
	cout << "--------------------------------------------------------------\n";
	cout << "(3) Business Account\n";
	cout << "--------------------------------------------------------------\n";
	cin >> option2;

	switch (option2) {

	case 1:
		accountGen++;
		system("CLS");
		cout << "************************************************************\n";
		cout << "                  Create Current Account\n";
		cout << "************************************************************\n";
		cout << "Enter First Name: \n";
		cin >> fName;

		cout << "Enter Second Name: \n";
		cin >> sName;

		cout << "Enter Your Current Home Address: \n";
		cin >> customerAddress;

		accounts.push_back(Account(fName, sName, customerAddress, 0, "Current", accountGen));

		cout << "Your current account has been created, your account number is ";
		cout << accountGen;
		system("PAUSE");
		break;

	case 2:
		accountGen++;
		system("CLS");
		cout << "************************************************************\n";
		cout << "                  Create Savings account\n";
		cout << "************************************************************\n";
		cout << "Enter First Name: \n";
		cin >> fName;

		cout << "Enter Second Name: \n";
		cin >> sName;

		accounts.push_back(Account(fName, sName, customerAddress, 0, "Savings", accountGen));

		cout << "Your savings account has been created, your account number is " + accountGen;
		system("PAUSE");
		break;

	case 3:
		accountGen++;
		system("CLS");
		cout << "************************************************************\n";
		cout << "                  Create Business account\n";
		cout << "************************************************************\n";
		cout << "Enter First Name: \n";
		cin >> fName;

		cout << "Enter Second Name: \n";
		cin >> sName;

		accounts.push_back(Account(fName, sName, customerAddress, 0, "Business", accountGen));

		cout << "Your Business account has been created, your account number is\n";
		cout << accountGen;
		system("PAUSE");
		break;
	}

}

void EbankController::deposit() {
	cout << "************************************************************\n";
	cout << "                  DEPOSIT:\n";
	cout << "************************************************************\n";

	cout << "Please Enter Account Number: \n";
	cin >> accountNum;

	for (int i = 0; i < accounts.size(); i++) {

		if (accounts[i].getAccountNumber() == accountNum) {
			cout << "Please Enter A Deopsit Amount: \n";
			cin >> amou;
			accounts[i].deposit(amou);
			cout << "Transaction Sucessfull, your new balance is\n";
			cout << accounts[i].getBalance();
		}

	}
}

void EbankController::withdraw() {
	cout << "************************************************************\n";
	cout << "                  WITHDRAW:\n";
	cout << "************************************************************\n";
	cout << "Please Enter Account Number: \n";
	cin >> accountNum;

	for (int i = 0; i < accounts.size(); i++) {

		if (accounts[i].getAccountNumber() == accountNum) {
			cout << "Please Enter An Amount To Withdraw: \n";
			cin >> amou;
			accounts[i].withdraw(amou);
			cout << "Transaction Sucessfull, your new balance is\n";
			cout << accounts[i].getBalance();
		}

	}
}

void EbankController::viewAccount() {
	cout << "************************************************************\n";
	cout << "                  VIEW ACCOUNT:\n";
	cout << "************************************************************\n";

	cout << "Please Enter Account Number: \n";
	cin >> accountNum;

	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].getAccountNumber() == accountNum) {

			cout << "---------------customer name---------------\n\n";
			cout << accounts[i].getCustomerName() << "\n\n";
			cout << "---------------account number---------------\n\n";
			cout << accounts[i].getAccountNumber() << "\n\n";
			cout << "---------------account type---------------\n\n";
			cout << accounts[i].getAccountType() << "\n\n";
			cout << "---------------account balance---------------\n\n";
			cout << accounts[i].getBalance();
			cout << "---------------account address---------------\n\n";
			cout << accounts[i].getAddress();


		}

	}
}

void EbankController::updateAccountDetails() {
	cout << "************************************************************\n";
	cout << "                  UPDATE ACCOUNT DETAILS:\n";
	cout << "************************************************************\n";

	cout << "Please Enter Account Number: \n";
	cin >> accountNum;

	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].getAccountNumber() == accountNum) {

			cout << "************************************************************\n";
			cout << "                  UPDATE ACCOUNT:\n";
			cout << "************************************************************\n";
			cout << "Please The Details You Wish To Update:\n";
			cout << "--------------------------------------------------------------\n";
			cout << "(1) Change First Name\n";
			cout << "--------------------------------------------------------------\n";
			cout << "(2) Change Second Name\n";
			cout << "--------------------------------------------------------------\n";
			cout << "(3) Change Address\n";
			cout << "--------------------------------------------------------------\n";
			cout << "(4) Change Account Type\n";
			cout << "--------------------------------------------------------------\n";
			cin >> option3;

			switch (option3) {

			case 1:
				system("CLS");
				cout << "Please enter the new first name:\n";
				cin >> fName;
				accounts[i].updateFirstName(fName);
				cout << "Updating your account has been successful, the name on this account is now \n";
				cout << accounts[i].getCustomerName();
				system("PAUSE");
				break;

			case 2:
				system("CLS");
				cout << "Please enter the new second name:\n";
				cin >> sName;
				accounts[i].updateFirstName(sName);
				cout << "Updating your account has been successful, the name on this account is now \n";
				cout << accounts[i].getCustomerName();
				system("PAUSE");
				break;

			case 3:
				system("CLS");
				cout << "Please enter the new address:\n";
				cin >> customerAddress;
				accounts[i].updateAddress(customerAddress);
				cout << "Updating your account has been successful, the address on this account is now \n";
				cout << accounts[i].getCustomerName();
				system("PAUSE");
				break;

			case 4:
				system("CLS");
				cout << "Please enter choose a new account type:\n";
				cout << "************************************************************\n";
				cout << "                  CHANGE ACCOUNT TYPE ACCOUNT:\n";
				cout << "************************************************************\n";
				cout << "Please Select Account Type:\n";
				cout << "--------------------------------------------------------------\n";
				cout << "(1) Current Account\n";
				cout << "--------------------------------------------------------------\n";
				cout << "(2) Savings Account\n";
				cout << "--------------------------------------------------------------\n";
				cout << "(3) Business Account\n";
				cout << "--------------------------------------------------------------\n";

				cin >> option4;

				switch (option4) {
				case 1:
					accounts[i].changeAccountType("Current");
					break;
				case 2:
					accounts[i].changeAccountType("Savings");
					break;
				case 3:
					accounts[i].changeAccountType("Business");
					break;


				}


				system("PAUSE");
				break;




			}


		}

	}
}

void EbankController::viewAllCustomerAccounts() {
	cout << "************************************************************\n";
	cout << "                  VIEW ALL CUSTOMER ACCOUNTS:\n";
	cout << "************************************************************\n";
	cout << "Please enter your second name :\n";
	cin >> sName;


	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].getSecondName() == sName) {

			cout << "---------------customer name---------------\n\n";
			cout << accounts[i].getCustomerName() << "\n\n";
			cout << "---------------account number---------------\n\n";
			cout << accounts[i].getAccountNumber() << "\n\n";
			cout << "---------------account type---------------\n\n";
			cout << accounts[i].getAccountType() << "\n\n";
			cout << "---------------account balance---------------\n\n";
			cout << accounts[i].getBalance();
			cout << "---------------account address---------------\n\n";
			cout << accounts[i].getAddress();


		}

	}
}

void EbankController::mergeSortAccounts() {
	cout << "************************************************************\n";
	cout << "                  SORT ALL CUSTOMER ACCOUNTS BY BALANCE(Merge sort):/n";
	cout << "************************************************************\n";



}


void EbankController::insertionSortAccounts() {
	cout << "************************************************************\n";
	cout << "   SORT ALL CUSTOMER ACCOUNTS BY BALANCE(Insertion sort):/n";
	cout << "************************************************************\n";

	vector<int> sortedArray;

	int temp, i, j;

	cout << "Please enter your second name :\n";
	cin >> sName;



	for (int i = 0; i < accounts.size(); i++)
		if (accounts[i].getSecondName() == sName) {
			sortedArray.push_back(accounts[i].getBalance());
		}

	for (i = 1; i < accounts.size(); i++)
	{
		j = i;
		while (j > 0)
		{
			if (sortedArray[j - 1] < sortedArray[j])
			{
				temp = sortedArray[j - 1];
				sortedArray[j - 1] = sortedArray[j];
				sortedArray[j] = temp;

				j--;
			}
			else
				break;
		}
	}
	cout << " Your Accounts sorted by balance\n";
	for (int i = 0; i <= sortedArray.size() - 1; i++) {
		if (accounts[i].getSecondName() == sName) {

			cout << "---------------customer name---------------\n\n";
			cout << accounts[i].getCustomerName() << "\n\n";
			cout << "---------------account number---------------\n\n";
			cout << accounts[i].getAccountNumber() << "\n\n";
			cout << "---------------account type---------------\n\n";
			cout << accounts[i].getAccountType() << "\n\n";
			cout << "---------------account balance---------------\n\n";
			cout << sortedArray[i] << "\n";


		}

	}


}

void EbankController::exit() {
	cout << "************************************************************\n";
	cout << "                  EXIT:\n";
	cout << "************************************************************\n";

}