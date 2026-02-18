#pragma once
#include "Person.h"
class Client : Person
{
	double balance;

public:
	Client() :Person() {
		balance = 0;
	}
	Client(int id, string name, string pass, double balance) :
		Person(id, name, pass) {
		setBalance(balance);
	}

	void setBalance(double balance) {
		if (Validation::validateBalance(balance)) {
			this->balance = balance;
		}
	}

	double  getBalance() {
		return balance;
	}

	void deposit(double amount) {
		if (amount > 0) {
			// depo
			balance += amount;
			cout << "Operation completed" << endl;
		}
		else {
			cout << "Invalid amount!!" << endl;
		}
	}

	void withdrow(double amount) {
		if (balance > amount) {
			// withdrow
			balance -= amount;
			cout << "Operation Completed" << endl;
		}
		else {
			cout << "Amount Excceded balnce" << endl;
		}
	}

	void transferTo(double amount, Client& recipient) {
		if (balance > amount) {
			balance -= amount;
			recipient.balance += amount;
		}
		else
		{
			cout << "Amount excceded balacne!" << endl;
		}
	}

	void displayInfo() {
		Person::displayInfo();
		cout << "Salary:" << balance << endl;
	}
};

