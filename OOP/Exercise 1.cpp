#include <iostream>
using namespace std;

class BALOK {
	public :
	int panjang;
	int lebar;
	int tinggi;
	int volume;
	int luas;
	
	BALOK(){
		panjang = 5;
		lebar = 3;
		tinggi = 6;
	}
	
	void getPanjangTinggiLebar(int panjang, int tinggi, int lebar){
	this->panjang = panjang;
	this->tinggi = tinggi;
	this->lebar = lebar;
	}
	
	void Display(){
	volume = panjang*tinggi*lebar;
	cout << "Volume Balok = " << volume << endl;
	
	luas = 2*((panjang*lebar)+(panjang*tinggi)+(lebar*tinggi));
	cout << "Luas Balok = " << luas << endl;	
	}
	
};

int main (){
	BALOK Kotak;
	Kotak.getPanjangTinggiLebar(6,5,4);
	Kotak.Display();
	return 0;
}
