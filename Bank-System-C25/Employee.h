#pragma once
#include "Person.h"
#include "Client.h"
class Employee : public Person
{
	double salary;
public:
	Employee() : Person() {
		salary = 0;
	}
	Employee(int id, string name, string pass, double salary) :
		Person(id, name, pass) {
		 setSalary(salary);
	}

	void setSalary(double salary) {
		if (Validation::validateSalary(salary)) {
			this->salary = salary;
		}
	}

	double getSalary() {
		return salary;
	}

	void displayInfo() {
		Person::displayInfo();
		cout << "Salary: " << salary << endl;
	}
	

	void addClient(Client& client) {
		allClients.push_back(client);
	}

	/// <summary>
	///	search for Client and retur it or null if doesn't exist
	/// </summary>
	/// <param name="id"></param>
	/// <returns>Clinet* or nullptr</returns>
	Client* searchClient(int id) {
		for (cIt = allClients.begin(); cIt != allClients.end(); ++cIt) {
			if (cIt->getId() == id) {
				// [c1, c2, c3]
				//return &(*cIt);
				return cIt._Ptr;
			}
		}
		return nullptr;
	}

	void listClient() {
		for (cIt = allClients.begin(); cIt != allClients.end(); ++cIt) {
			cIt->displayInfo();
		}
	}


	// Make sure That Clinet exist
	void editClient(Client* c, string name, string password, double balance) {
		c->setName(name);
		c->setPass(password);
		c->setBalance(balance);
	}

};

static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;


