#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class MOBIL {
	public:
	string merk;
	string transmisi;
	int tahun;
	int silinder;
	string NoPolisi;
	string warna;
	string HondaCRV, Manual, DB1OOP, Putih;
	
	MOBIL (){
		merk		= HondaCRV;
		transmisi	= Manual;
		tahun		= 2004;
		silinder	= 1300;
		NoPolisi	= DB1OOP;
		warna		= Putih;
	}
	
	void Read(){
		cout << "Input Merk : ";
		cin >> merk;
		cout << "Input Transmisi :";
		cin >> transmisi;
		cout << "Input Tahun :";
		cin >> tahun;
		cout << "Input No Polisi :";
		cin >> NoPolisi;
		cout << "Input Warna :";
		cin >> warna;
	}
	
	void Display(){
		cout << "Mobil Detail" << endl;
		cout << "Merk Mobil			= " << merk << endl;
		cout << "Transmisi Mobil	= " << transmisi << endl;
		cout << "Tahun Mobil		= " << tahun << endl;
		cout << "Nomor Polisi Mobil	= " << NoPolisi << endl;
		cout << "Warna Mobil		= " << warna << endl;
	}
	
};

int main (){
	
	MOBIL Brio;
	Brio.Read();
	Brio.Display();
	
	MOBIL Jazz;
	Jazz.Read();
	Jazz.Display();
	
	MOBIL Yaris;
	Yaris.Read();
	Yaris.Display();
	
	getch();
}
