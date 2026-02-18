#pragma once
#include "Employee.h"
class Admin : Employee
{
	// id , name , password, salary 

public: 
	Admin() : Employee() {

	}
	Admin(int id, string name, string pass, double salary) 
		: Employee(id, name, pass, salary) {

	}

};

