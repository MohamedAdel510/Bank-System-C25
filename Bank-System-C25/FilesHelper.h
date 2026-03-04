#pragma once
#include "Parser.h"
#include <fstream>

//constexpr const char* ClientFileName = "data/Clients.txt";

#define C_File_Path "data/Clients.txt"
#define E_File_Path "data/Employees.txt"
#define A_File_Path "data/Admins.txt"

#define C_last_Id_Path "data/LastClient'sID.txt"
#define E_last_Id_Path "data/LastEmployee'sID.txt"
#define A_last_Id_Path "data/LastAdmin'sID.txt"

class FilesHelper
{
public:
	static void saveLast(string fileName, int id) {
		fstream file(fileName, ios::out);
		//cout << id;
		file << id;
		file.close();
	}
	static int getLast(string fileName) {
		fstream file;
		file.open(fileName, ios::in);
		int id;
		//cin >> id;
		file >> id;
		return id;
	}

	static void saveClient(Client c) {
		fstream file(C_File_Path, ios::app);
		//1000|AhmedWael|ahmed123|6000
		file << c.getId() << "|" << c.getName() << "|" << c.getPass() << "|" << c.getBalance() << endl;
		file.close();
		saveLast(C_last_Id_Path, c.getId());
	}
	static void saveEmployee(Employee e) {
		fstream file(E_File_Path, ios:: app);
		file << e.getId() << "|" << e.getName() << "|" << e.getPass() << "|" << e.getSalary() << endl;
		file.close();
		saveLast(E_last_Id_Path, e.getId());
	}
	static void saveAdmin(Admin a) {
		fstream file(A_File_Path, ios:: app);
		file << a.getId() << "|" << a.getName() << "|" << a.getPass() << "|" << a.getSalary() << endl;
		file.close();
		saveLast(A_last_Id_Path, a.getId());
	}

	static void getClients() {
		fstream file(C_File_Path, ios::in);
		string line;
		while (getline(file, line)) {
			allClients.push_back(Parser::parseToClient(line));
		}
		file.close();
	}
	static void getEmployees() {
		fstream file(E_File_Path, ios::in);
		string line;
		
		while (getline(file, line)) {
			allEmployees.push_back(Parser::parseToEmplyee(line));
		}
		file.close();
	}
	static void getAdmins() {
		fstream file(A_File_Path, ios::in);
		string line;
		
		while (getline(file, line)) {
			allAdmins.push_back(Parser::parseToAdmin(line));
		}
		file.close();
	}


	static void clearFile(string fileName, string lastIdFile, int startID) {
		fstream file;
		file.open(fileName, ios::out);
		file.close();
		file.open(fileName, ios::out);
		file << startID;
		file.close();
	}
};

