#pragma once
#include <vector>
#include "Admin.h"
#include "Client.h"
#include <sstream>
class Parser
{

	static vector<string> split(string line) {
		vector<string> parts;
		// 1000|AhmedWael|ahmed123|6000
		stringstream ss(line);
		string part;
		while (getline(ss, part, '|')) {
			parts.push_back(part);
		}
		// [0]    [1]    [2]    [3]
		// id     name   pass   balance

		return parts;
	}
public:
	static Client parseToClient(string line) {
		// [0]    [1]    [2]    [3]
		// id     name   pass   balance
		vector<string> parts = split(line);
		Client c;
		c.setId(stoi(parts[0]));
		c.setName(parts[1]);
		c.setPass(parts[2]);
		c.setBalance(stod(parts[3]));

		return c;
	}
	static Employee parseToEmplyee(string line) {
		// [0]    [1]    [2]    [3]
		// id     name   pass   salary
		vector<string> parts = split(line);
		Employee E;
		E.setId(stoi(parts[0]));
		E.setName(parts[1]);
		E.setPass(parts[2]);
		E.setSalary(stod(parts[3]));

		return E;
	}
	static Admin parseToAdmin(string line) {
		// [0]    [1]    [2]    [3]
		// id     name   pass   salary
		vector<string> parts = split(line);
		Admin A;
		A.setId(stoi(parts[0]));
		A.setName(parts[1]);
		A.setPass(parts[2]);
		A.setSalary(stod(parts[3]));

		return A;
	}
};

