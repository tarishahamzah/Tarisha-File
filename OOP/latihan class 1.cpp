#include <iostream>
#include <string.h>

using namespace std;

class Student{
	public :
		int NIM;
		string Nama;
		float GPA;
		
		void read () {
		cout <<"=================================" << endl;
		cout <<"Input NIM	:	"; 
		cin >> NIM;
		cout <<"Input Nama	:	"; 
		cin >> Nama;
		cout <<"Input GPA	:	"; 
		cin >> GPA;
		}
		
		void display () {
			cout <<"The Detail of Student are :" << endl;
			cout <<" NIM	:	" << NIM << endl;
			cout <<" Nama	:	" << Nama << endl;
			cout <<" GPA	:	" << GPA << endl;
		}
};

		int main (){
			Student Yohan, Evan, Nia;
			Yohan.read();
			Yohan.display();
			
			Evan.read();
			Evan.display();
			
			Nia.read();
			Nia.display();
	
		return 0;
	}
