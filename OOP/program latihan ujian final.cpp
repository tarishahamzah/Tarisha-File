#include <iostream>
using namespace std;

class TSHIRT {
	public :
		virtual void displayBiaya(char Jenis)=0;
};

class VOLCOM : public TSHIRT{
	int Harga, TAG_MERK, PACKING_CARGO, Total;
	char Jenis;
	public :
		void displayBiaya(char Jenis){
			TAG_MERK = 50000;
			PACKING_CARGO = 180000;
			
			if (Jenis == 'V') {
				cout << "Vneck \n";
				Harga = 2000000;
			}
			else if (Jenis == 'O'){
				cout << "Oneck \n";
				Harga = 2000000;
			}
			else if (Jenis == 'L'){
				cout << "Long Hand \n";
				Harga = 2200000;
			}
			else {
				throw Jenis;
			}
			
			Total = TAG_MERK + PACKING_CARGO + Harga + (Harga * 0.1);
			cout << "Total Bayar VOLCOM = Rp." << Total << endl;	
		}
};

class SPIDER : public TSHIRT{
	int Harga, TAG_MERK, PACKING_CARGO, Total;
	char Jenis;
	public :
		void displayBiaya(char Jenis){
			TAG_MERK = 55000;
			PACKING_CARGO = 180000;
			
			if (Jenis == 'V') {
				cout << "Vneck \n";
				Harga = 2100000;
			}
			else if (Jenis == 'O'){
				cout << "Oneck \n";
				Harga = 2100000;
			}
			else if (Jenis == 'L'){
				cout << "Long Hand \n";
				Harga = 2400000;
			}
			else {
				throw Jenis;
			}
			
			Total = TAG_MERK + PACKING_CARGO + Harga + (Harga * 0.1);
			cout << "Total Bayar SPIDER = Rp." << Total << endl;	
		}
};

class  SECOND3 : public TSHIRT{
	int Harga, TAG_MERK, PACKING_CARGO, Total;
	char Jenis;
	public :
		void displayBiaya(char Jenis ){
			TAG_MERK = 60000;
			PACKING_CARGO = 180000;
			
			if (Jenis == 'V') {
				cout << "Vneck \n";
				Harga = 2000000;
			}
			else if (Jenis == 'O'){
				cout << "Oneck \n";
				Harga = 2000000;
			}
			else if (Jenis == 'L'){
				cout << "Long Hand \n";
				Harga = 2200000;
			}
			else {
				throw Jenis;
			}
			
			Total = TAG_MERK + PACKING_CARGO + Harga + (Harga * 0.1);
			cout << "Total Bayar SECOND 3 = Rp." << Total << endl;	
		}
};

class MARVEL : public TSHIRT{
	int Harga, TAG_MERK, PACKING_CARGO, Total;
	char Jenis;
	public :
		void displayBiaya(char Jenis ){
			TAG_MERK = 65000;
			PACKING_CARGO = 180000;
			
			if (Jenis == 'V') {
				cout << "Vneck \n";
				Harga = 2300000;
			}
			else if (Jenis == 'O'){
				cout << "Oneck \n";
				Harga = 2300000;
			}
			else if (Jenis == 'L'){
				cout << "Long Hand \n";
				Harga = 2600000;
			}
			else {
				throw Jenis;
			}
			
			Total = TAG_MERK + PACKING_CARGO + Harga + (Harga * 0.1);
			cout << "Total Bayar MARVEL = Rp." << Total << endl;	
		}
};

int main (){
	
	try{
		TSHIRT *Kaos;
		Kaos = new VOLCOM;
		Kaos->displayBiaya('X');
		delete Kaos;	
	}
	
	catch (char Jenis){
		cout << "Terjadi Masalah. Jenis yang di masukkan tidak terdaftar dalam data \n";
	}
	
}
