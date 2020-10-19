#include <iostream>
using namespace std;

class Balok {
	public :
	int panjang, lebar, tinggi;
		Balok (){
			cout << "Input Panjang\t:";
			cin >> panjang;
			cout << "Input Lebar\t:";
			cin >> lebar;
			cout << "Input Tinggi\t:";
			cin >> tinggi;
		}
	
};

class Luas : public Balok {
	private :
	int luas;
	public :
		void hitungDisplay(){
			cout << "---------------------" << endl;
			cout << "Luas Sebuah Balok  " << endl;
			luas = 2*((panjang*lebar) + (panjang*tinggi) + (lebar*tinggi));
			cout << "Luas Balok\t=\t"<< luas << endl;
			cout << "---------------------" << endl;		
		}
		
};

class Volume : public Balok{
	private :
	int volume;
	public :
		void hitungDisplay(){
			cout << "---------------------" << endl;
			cout << "Volume Sebuah Balok" << endl;
			volume = panjang * lebar * tinggi;
			cout << "Volume Balok\t=\t" << volume << endl;
			cout << "---------------------" << endl;
		}
};

class Keliling : public Balok{
	int keliling;
	public :
		void hitungDisplay(){
			cout << "---------------------" << endl;
			cout << "Keliling Sebuah Balok" << endl;
			keliling = 4*(panjang + lebar + tinggi);
			cout << "Keliling Balok\t=\t" << keliling << endl;
			cout << "---------------------" << endl;
		}
};

	int main (){
		Luas B;
		B.hitungDisplay();
		
		Volume Ba;
		Ba.hitungDisplay();
		
		Keliling Lok;
		Lok.hitungDisplay();
		
		return 0;
	}

