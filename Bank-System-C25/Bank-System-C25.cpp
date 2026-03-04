#include <iostream>
#include "FilesHelper.h"
using namespace std;




int main() {

	//FilesHelper::saveLast("data/LastClient'sID.txt", 20);
	//cout << FilesHelper::getLast("data/LastClient'sID.txt") << endl;


	/*vector<Client> v;
	v = FilesHelper::getAllClients();*/

	//for (int i = 0; i < v.size(); i++) {
	//	v[i].displayInfo();
	//}

	//FilesHelper::saveClient(Client(200, "MOhamed", "Mohamed123", 6000));
	//v = FilesHelper::getAllClients();

	//FilesHelper::getAllClients();

	//for (int i = 0; i < allClients.size(); i++) {
	//	allClients[i].displayInfo();
	//}

	int x = 5;
	int* ptr = &x;

	cout << x << endl;
	cout << *ptr << endl;

}

