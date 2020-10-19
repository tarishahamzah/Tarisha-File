#include <iostream>
using namespace std;

class IlomataFlorist{
	public :
		virtual void displayPesanan(int Banyak)=0;
};

class BungaPot : public IlomataFlorist {
	int Ukuran, Bayar, Total;
	public :
		void displayPesanan(int Banyak){
			cout << "Bunga Pot \n";
			
			cout << "Input Ukuran =";
			cin >> Ukuran;
			if (Ukuran == 1){
				cout << "Bunga Pot Kecil \n";
				Bayar = 25000;
				
				Total = Banyak * Bayar;
		 	
			}
			
			else if (Ukuran == 2){
				cout << "Bunga Pot Sedang \n";
				Bayar = 50000;
				
				Total = Banyak * Bayar;
		 	
			}
			
			else if (Ukuran == 3){
				cout << "Bunga Pot Besar \n";
				Bayar = 100000;
				
				Total = Banyak * Bayar;
		 		
			}
			else {
				throw Ukuran;
			}
		cout << "Total Bayar Bunga Pot = Rp." << Total << endl;
		}
};

class BungaKrans : public IlomataFlorist {
	int Jenis, Bayar, Total;
	public :
		void displayPesanan(int Banyak){
			cout << "Bunga Krans \n";
			
			cout << "Input Jenis =" << endl;
			cin >> Jenis;
			
			if (Jenis == 1){
				cout << "Krans Gantung" << endl;
				Bayar = 100000;
				
				Total = Banyak * Bayar;
		 				
			}
			
			else if (Jenis == 2){
				cout << "Krans Kaki" << endl;
				Bayar = 200000;
			
				Total = Banyak * Bayar;
		 	
			}
			
			else if (Jenis == 3){
				cout << "Krans Salib" << endl;
				Bayar = 500000;
				
				Total = Banyak * Bayar;
		 	
			}
			
			else if (Jenis == 4){
				cout << "Krans Bulat" << endl;
				Bayar = 750000;
			
				Total = Banyak * Bayar;
		 		
			}
			
			else {
				throw Jenis;
			}
			cout << "Total Bayar Bunga Krans = Rp." << Total << endl;
		}
};

class BungaPapan : public IlomataFlorist {
	int Model, Bayar, Total;
	public :
		void displayPesanan (int Banyak){
			
			cout << "Input Model =";
			cin >> Model;
			
			if (Model == 1) {
				cout << "Bunga Papan Biasa \n";
				Bayar = 1500000;
		
				Total = Banyak * Bayar;
				
			}
			
			else if (Model == 2){
				cout << "Bunga Papan Full Bunga \n";
				Bayar = 3000000;
				
				Total = Banyak * Bayar;
				
			}
			
			else {
				throw Model;
			}
				cout << "Total Bayar Bunga Papan = Rp." << Total << endl;
		}
};

int main (){
	try {
		IlomataFlorist *Kakaskasen;
		Kakaskasen = new BungaKrans;
		Kakaskasen -> displayPesanan(4);
		delete Kakaskasen;
	}
	
	catch (int Banyak){
		cout << "Terdapat Kesalahan. Tidak Termasuk dalam daftar pesanan \n";
	}
}
