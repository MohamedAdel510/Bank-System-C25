#pragma once
#include "Person.h"
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
};

