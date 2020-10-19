// Pengenalan OOP
#include <iostream>
using namespace std;

// Class & Object
class OOP {
	public : // Tingkat Akses
	int Nilai, target, kehadiran, total;
	virtual void displayNilai(int Nilai )=0; // pure virtual function
};

class UjianFinal : public OOP { // inheritance
	public :
			UjianFinal(){ // constructor
			kehadiran = 1.1;
			target = 75;
		}
		
		void displayNilai(int Nilai) {
			this->Nilai = Nilai; // pointer this
			
			if (Nilai > target){
				total = Nilai * kehadiran;
				cout << "Total = " << total << endl;
				cout << "Ujian Final Lulus dan Hasil Memuaskan\n";
			}
			
			else if (Nilai == target) {
				total = Nilai * kehadiran;
				cout << "Total = " << total << endl;
				cout << "Ujian Final Lulus \n";
			}
			
			else if (Nilai < target && Nilai > 0) {
				total = Nilai * kehadiran;
				cout << "Total = " << total << endl;
				cout << "Ujian Final Tidak Tuntas \n";
			}
			
			else {
				throw Nilai;
			}
		}
			
};

int main (){
	try { // exception handling
		OOP *Mahasiswa;
		Mahasiswa = new UjianFinal;
		Mahasiswa -> displayNilai(50);
		delete Mahasiswa;
	}
	
	catch (int Nilai){
		cout << "Terjadi Kesalahan. Nilai Harus Bersifat Positif \n";
	}
}

