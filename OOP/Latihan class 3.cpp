#include <iostream>
#include <string.h>
using namespace std;

class Employee {
	public:
	// Data Member = 5
	int NIP;
	string Name;
	float NetSalary;
	string Possition;
	string Status;
	
	// Member Function = 11
	void read(){
		cout << "Program Class Employee" <<endl;
		cout << "Input NIP			:	";
		cin >> NIP;
		cout << "Input Name			:	";
		cin >> Name;
		cout << "Input NetSalary	:	";
		cin >> NetSalary;
		cout << "Input Possition	:	";
		cin >> Possition;
		cout << "Input Status		:	";
		cin >> Status;
	}
	
	// Member Function = 5
	void display(){
		cout << "The Detail of The Employee are :" << endl;
		cout << "NIP		:	" << NIP << endl;
		cout << "Name		:	" << Name << endl;
		cout << "NetSalary	:	" << NetSalary << endl;
		cout << "Possition	:	" << Possition << endl;
		cout << "Status 	:	" << Status << endl;
	}
	
};

	int main (){
		// instance = 3 people
		Employee Her, His, Them;
		Her.read();
		Her.display();
		
		His.read();
		His.display();
	
		Them.read();
		Them.display();
		
		return 0;
	}
