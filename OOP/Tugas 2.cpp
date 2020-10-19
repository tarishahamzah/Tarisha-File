#include <iostream>
#include <string.h>
using namespace std;

class BangunDatar {
	public:
		// Data Member
		int sisi;
		int panjang;
		int lebar;
		int alas;
		int tinggi;
		int diameter;
		int jarijari;
		float luas;
		float keliling;
	
		// Member Function
		
		int persegi (int sisi){
			keliling = 4 * sisi;
			cout << "Keliling Persegi = " << keliling << endl;
		}
		
		int persegi_panjang (int panjang, int lebar){
			keliling = 2 * (panjang * lebar);
			cout << "Keliling Persegi Panjang =" << keliling << endl;
		}
		
		int segitiga (int sisi){
			keliling = 3 * sisi;
			cout << "Keliling Segitiga =" << keliling << endl;
		}
		
		int lingkaran (int diameter){
			keliling = 3,14 * diameter;
			cout << "Keliling Lingkaran =" << keliling << endl;
		}
};

	int main (){
		BangunDatar SATU;
		SATU.persegi(4);
		SATU.persegi_panjang(4,8);
		SATU.segitiga(6);
		SATU.lingkaran(8);
		
		return 0;
	}
