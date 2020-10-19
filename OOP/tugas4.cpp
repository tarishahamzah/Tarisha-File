#include <iostream>
using namespace std;

class Pegawai{	
	public : 
	Pegawai (){
	cout << "Bekerja Giat" << endl;
	cout << "Menjaga Nama Baik" << endl;
	cout << "Menerima Gaji Pokok" << endl;
	}
	
};

class Manager : public Pegawai {
	public : 
	Manager (){
	cout << "Menerima Tunjangan" << endl;
	cout << "Mengatur Supervisior" << endl;
	cout << "Mengatur Sales" << endl;
	cout << "Menerima Gaji Manager" << endl;
	}
	
};

class Supervisior : public Pegawai {
	public :
	Supervisior(){
	cout << "Mengatur Para Sales" << endl;
	cout << "Menerima Gaji Supervisior" << endl;
	}
	
};

class Sales : public Pegawai {
	public :
	Sales(){
	cout << "Menjual Produk" << endl;
	cout << "Mengurus Pemasaran" << endl;
	cout << "Menerima Gaji Sales" << endl;	
	}
	
};

class SalesExcecutive : public Sales{
	public :
	SalesExecutive(){
	cout << "Menjalin Relasi" << endl;
	cout << "Menerima Tunjangan Kendaraan" << endl;	
	}
	
};
	int main (){
		Manager Yuan;
		Supervisior Ivan;
		Sales Calvin;
		SalesExcecutive Rikho;
	}

