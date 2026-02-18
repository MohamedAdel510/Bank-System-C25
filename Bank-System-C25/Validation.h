#pragma once
#include<iostream>
using namespace std;
class Validation
{
public:
	/// <summary>
	/// return true if the name size between 3 an 20 and all char are alpha
	/// otherwise returns fals
	/// </summary>
	/// 
	/// <param name="userName">
	/// </param>
	/// <returns>
	/// bool
	/// </returns>
	static bool validateName(string name) {
		if (name.size() < 3 || name.size() > 20) {
			cout << "min size 3 and max size 20.!!" << endl;
			return false;
		}
		for (int i = 0; i < name.size(); i++) {
			//if (!(tolower(name[i]) > 'a' && tolower(name[i]) < 'z')) {
			if (!isalpha(name[i])) {
				cout << "name must be alphabetic chars.!!" << endl;
				return false;
			}
		}
		return true;
	}
	static bool validatePass(string pass) {
		//without spaces. 
		//min size 8 and max size 20

		if (pass.length() < 8 || pass.length() > 20) {
			cout << "min size 8 and max size 20.!!" << endl;
			return false;
		}

		for (int i = 0; i < pass.size(); i++) {
			if (pass[i] == ' ') {
				cout << "without spaces.!!" << endl;
				return false;
			}
		}

		return true;
	}
	static bool validateBalance(double balance) {
		if (balance < 1500) {
			cout << "min balance 1500!!" << endl;
			return false;
		}
		return true;
	}
	static bool validateSalary(double salary) {
		if (salary < 5000) {
			cout << "min salary 5000!!" << endl;
			return false;
		}
		return true;
	}

};

