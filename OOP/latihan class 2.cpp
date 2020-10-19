#include <iostream>
#include <string.h>

using namespace std;

class Student{
	public :
		int NIM;
		string Nama;
		float GPA;
		
		void readSiswa () {
		cout <<"=================================" << endl;
		cout <<"Input NIM	:	"; 
		cin >> NIM;
		cout <<"Input Nama	:	"; 
		cin >> Nama;
		cout <<"Input GPA	:	"; 
		cin >> GPA;
		}
		
		void displaySiswa () {
			cout <<"The Detail of Student are :" << endl;
			cout <<" NIM	:	" << NIM << endl;
			cout <<" Nama	:	" << Nama << endl;
			cout <<" GPA	:	" << GPA << endl;
		}
};

class Dosen{
	public :
		int NIDN;
		string Nama;
		int SKS;
		
		void readDosen() {
			cout <<"=================================" << endl;
		cout <<"Input NIDN	:	"; 
		cin >> NIDN;
		cout <<"Input Nama	:	"; 
		cin >> Nama;
		cout <<"Input SKS	:	"; 
		cin >> SKS;
		}
		
		void displayDosen(){
			cout <<"The Detail of Teacher are :" << endl;
			cout <<" NIDN	:	" << NIDN << endl;
			cout <<" Nama	:	" << Nama << endl;
			cout <<" SKS	:	" << SKS << endl;
		}
};

		int main (){
			Student Yohan, Evan, Nia;
			Yohan.readSiswa();
			Yohan.displaySiswa();
			
			Evan.readSiswa();
			Evan.displaySiswa();
			
			Nia.readSiswa();
			Nia.displaySiswa();
			
			Dosen Joe;
			Joe.readDosen();
			Joe.displayDosen();
w		return 0;
	}
