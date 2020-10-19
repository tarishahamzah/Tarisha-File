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
			luas = sisi*sisi;

			keliling = 4*sisi;
			cout << "Luas Persegi =" << luas << endl;
			cout << "Keliling Persegi = " << keliling << endl;
		}
		
		int persegi_panjang (int panjang, int lebar){
			luas = panjang*lebar;
			keliling =2*(panjang*lebar);
			cout << "Luas Persegi Panjang =" << luas << endl;
			cout << "Keliling Persegi Panjang =" << keliling << endl;
		}
		
		int segitiga (int alas, int tinggi, int sisi){
			luas = (alas * tinggi)/2;
			keliling = 3 * sisi;
			cout << "Luas Segitiga =" << luas << endl;
			cout << "Keliling Segitiga =" << keliling << endl;
		}
		
		int lingkaran (int jarijari, int diameter){
			luas = 3,14 * jarijari *jarijari;
			keliling = 3,14 * diameter;
			cout << "Luas Lingkaran =" << luas << endl;
			cout << "Keliling Lingkaran =" << keliling << endl;
		}
};

	int main (){
		BangunDatar Satu;
		Satu.persegi(2);
		Satu.persegi_panjang(2,4);
		Satu.segitiga(4,6,8);
		Satu.lingkaran(8,4);
		
		return 0;
	}
