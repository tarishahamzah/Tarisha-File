#include <iostream>
using namespace std;
// Program Gaji Karyawan
class Input {
	public:
	int NIP;
	char Nama;
	int Jabatan;
	int GajiDasar;
				
	Input(){
	
		void cekGajiDasar(){
			if (Jabatan == 1){
			GajiDasar = 2000000;
			cout << "Gaji Dasar 1 = Rp." << GajiDasar << endl;
			}
			if (Jabatan == 2){
			GajiDasar = 3000000;
			cout << "Gaji Dasar 2 = Rp." << GajiDasar << endl;
			}
			if (Jabatan == 3){
			GajiDasar = 4000000;
			cout << "Gaji Dasar 3 = Rp." << GajiDasar << endl;
			}
		}
	}
	
};

class Bonus : public Input {
	public :

	int GajiBonus;
	void HitungBonus (){
	
		GajiBonus = GajiDasar+1000000;
		cout << "Bonus = Rp." << GajiBonus << endl;
	}
};

class Tunjangan : public Input {
	public:
	float GajiTunjangan;
	void HitungTunjangan (){
		
		GajiTunjangan = GajiDasar * 0.2;
		cout << "Tunjangan = Rp." << GajiTunjangan << endl;
		}
};

class Display : protected Bonus, protected Tunjangan {
	public :
	int total;
		void DisplayTotal(){
		
		cout << "Input NIP\t=\t" << NIP << endl;
		cout << "Input Nama\t=\t" << Nama << endl;
		cout << "Input Jabatan\t=\t" << Jabatan << endl;
		total = GajiBonus + GajiTunjangan;
		cout << "Total\t=\tRp." << total << endl;	
		}
		 
};	

	int main (){
		Display Jony;
		Jony.InputData();
		Jony.cekGajiDasar(1);
		Jony.DisplayTotal();
		return 0;
	}

