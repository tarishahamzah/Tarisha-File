#include <iostream>
#include <string.h>
using namespace std; 

class MOBIL {
	int a, b, c, pilih;
	char merk;
	char transmisi;
	int tahun;
	int silinder;
	char NoPolisi;
	char warna;
	
	public :
		MOBIL(){
			merk = 'Honda CRV';
			transmisi = 'Manual';
			tahun = 2004;
			silinder = 1300;
			NoPolisi = 'DB 1 OOP';
			warna = 'putih';
		}

	
	char	INSTANCE (char brio, char jazz, char yaris){
		a = brio;
		b = jazz;
		c = yaris;
	}	
	
	void display (){
			merk = 'Honda CRV';
			transmisi = 'Manual';
			tahun = 2004;
			silinder = 1300;
			NoPolisi =' DB 1 OOP';
			warna = 'putih';
			cout << " Merk Mobil = " << merk << endl;
			cout << " Tahun Mobil = " << tahun << endl;
			cout << " Silinder Mobil = " << silinder << endl;
			cout << " No Polisi Mobil = " << NoPolisi << endl;
			cout << " Warna Mobil = " << warna << endl;
	}
};

int main (){
	MOBIL satu;
	satu.display();
	satu.INSTANCE();
	
	return 0;
}
	/*	BRIO(){
			merk = Honda CRV;
			transmisi = Manual;
			tahun = 2004;
			silinder = 1300;
			NoPolisi = DB 1 OOP;
			warna = putih;
		}
		
		JAZZ(){
			merk = Honda CRV;
			transmisi = Manual;
			tahun = 2004;
			silinder = 1300;
			NoPolisi = DB 1 OOP;
			warna = putih;
		}
		
		YARIS(){
			merk = Honda CRV;
			transmisi = Manual;
			tahun = 2004;
			silinder = 1300;
			NoPolisi = DB 1 OOP;
			warna = putih;
		}
		*/
		
		 
		/*
		int INSTANCE (int a, int b, int c){
		do {
			cout << "Input Pilihan Anda = " << pilih << endl;
			
			if (pilih == 1) {
			merk = Brio;
			transmisi = Manual;
			tahun = 2004;
			silinder = 1300;
			NoPolisi = DB 1 OOP;
			warna = putih;
			}
			 cout << "Pilihan Anda Adalah Brio" << endl;
		}	
	
			
		}
		*/
