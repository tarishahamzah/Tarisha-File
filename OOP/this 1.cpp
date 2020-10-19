#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
enum TIPETRANSMISI {Automatic, Manual};

class MOBIL {
	char merk[25];
	TIPETRANSMISI transmisi;
	int tahun;
	int silinder;
	char NoPolisi[11];
	char warna[15];
	
	public:
		
		void setMobil(char *merk, TIPETRANSMISI transmisi, int tahun, int silinder, char *NoPolisi, char *warna){
		
		strcpy (this->merk, merk);
		this->transmisi	= transmisi;
		this->tahun 	= tahun;
		this->silinder	= silinder;
		strcpy (this->NoPolisi, NoPolisi);
		strcpy (this->warna, warna);	
		}
	
	void ShowInfoMobil(){
		cout << "Merk\t = " << merk << endl;
		cout << "Transmisi\t = ";
		switch (transmisi){
			case 0: cout << "Automatic\n"; break;
			case 1: cout << "Manual\n"; break;
		}
		cout << "Tahun\t = " << tahun << endl;
		cout << "Silinder\t = " << silinder << endl;
		cout << "No Polisi\t =" << NoPolisi << endl;
		cout << "Warna\t = " << warna << endl;
	}
};

int main (){
	MOBIL M;
	M.setMobil((char*) "Honda Brio", Manual, 2014, 1200, (char*) "DB 99 AH", (char*) "Silver");
	M.ShowInfoMobil();
	return 0;
}
