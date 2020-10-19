#include <iostream>
using namespace std;

class Input{
	public :
		int NIP;
		char Nama[20];
		int Jabatan;
		int GajiDasar;
			
			
		void InputData(){
				cout << "Input NIP\t=\t";
				cin >> NIP;
				cout << "Input Nama\t=\t";
				cin >> Nama;		
		}	
		
		
		void cekGajiDasar(int Jabatan){
			this->Jabatan=Jabatan;
			
			if (Jabatan == 1){
				GajiDasar = 2000000;
			}
			else if (Jabatan == 2){
				GajiDasar = 3000000;
			}
			else if (Jabatan == 3){
				GajiDasar = 4000000;
			}
		}
};

class Bonus : public Input {
	public :
		int GajiBonus;
		
		void HitungBonus(){
		GajiBonus = GajiDasar + 1000000;
		cout <<"Bonus = Rp." << GajiBonus << endl;	
		}
		
};

class Tunjangan : public Bonus {
	public :
		float GajiTunjangan;
		
		void HitungTunjangan(){
			GajiTunjangan = GajiDasar * 0.2;
			cout << "Tunjangan = Rp." << GajiTunjangan << endl;
		}
};

class Display : public Tunjangan{
	public :
		int total;
		
		void DisplayTotal(){
			HitungBonus();
			HitungTunjangan();
			total = GajiBonus + GajiTunjangan;
			
			cout << "NIP = " << NIP << endl;
			cout << "Nama = " << Nama << endl;
			cout << "Jabatan = " << Jabatan << endl;
			cout << "Total Gaji = Rp." << total << endl;
		}
		
		
};

	int main (){
		Display Jony;
		Jony.InputData();
		Jony.cekGajiDasar(1);
		Jony.DisplayTotal();
		return 0;
		
	}
