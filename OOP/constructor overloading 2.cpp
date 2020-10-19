#include <iostream>
using namespace std;

class Manusia{
	public :
		virtual void Berjalan(){
			cout << "Berjalan" << endl;
		}
		
		virtual void Berpakaian(){
			cout << "Berpakaian" << endl;
		}
};

class Mahasiswa : public Manusia{
	public :
		void Berjalan(){
			cout << "Berjalan Dengan Cara  Santai" << endl;
		}
		
		void Berpakaian(){
			cout << "Berpakaian Dengan Baju Bebas" << endl;
		}
};

class Tentara : public Manusia{
	public :
		void Berjalan(){
			cout << "Berjalan Dengan Cara  Tegap" << endl;
		}
		
		void Berpakaian(){
			cout << "Berpakaian Dengan Baju Seragam" << endl;
		}
};

int main (){
	
	Manusia M;
	Mahasiswa Mhs;
	Tentara TTR;
	
	M.Berjalan();
	Mhs.Berjalan();
	TTR.Berjalan();
	
	cout << "\n";
	M.Berpakaian();
	Mhs.Berpakaian();
	TTR.Berpakaian();
}

