#pragma once
#include "Employee.h"
class Admin : public Employee
{
	// id , name , password, salary 

public: 
	Admin() : Employee() {

	}
	Admin(int id, string name, string pass, double salary) 
		: Employee(id, name, pass, salary) {

	}
	void addEmployee(Employee& employee) {
		allEmployees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
		//for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
		//	if (eIt->getId() == id) {
		//		//return eIt._Ptr;
		//		return &(*eIt);
		//	}
		//}
		//return nullptr;

		for (int i = 0; i < allEmployees.size(); i++) {
			if (allEmployees[i].getId() == id) {
				return &allEmployees[i];
			}
		}
		return nullptr;
	}
	void editEmployee(Employee *e, string name, string password, double salary) {
		e->setName(name);
		e->setPass(password);
		e->setSalary(salary);

	}
	void listEmployee() {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getId() == id) {
				eIt->displayInfo();
			}
		}
	}

};

static vector<Admin> allAdmins;
