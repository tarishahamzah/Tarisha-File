#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class ActionCam {
		char Nama[25];
		char Series[25];
		char Sensor[25];
		float focal;
		int harga;
		int ongkir;
		int Total;
	public :
		
		
		void setActionCam(char *Nama, char *Series, char *Sensor, float focal, int harga)	{
			
			strcpy (this->Nama, Nama);
			strcpy (this->Series, Series);
			strcpy (this->Sensor, Sensor);
			this->focal	=	focal;
			this->harga	=	harga;
		}
		
		void showSetActionCam(){
			
			cout << "ActionCam Nama		=" << Nama << endl;
			cout << "ActionCam Series	=" << Series << endl;
			cout << "ActionCam Sensor	=" << Sensor << endl;
			cout << "ActionCam Focal	=" << focal << endl;
			cout << "ActionCam Harga	=" << harga << endl;
		}
		
		void DisplayActionCam(int ongkir ){
			Total = (harga + ongkir)*1.1;
			cout << "Total Bayar Seluruh ActionCam = Rp." << Total << endl;
		}
};
class DSLR {
		char Nama[25];
		char Series[25];
		char Sensor[25];
		float focal;
		int lensa;
		int harga;
		int ongkir, Total;
	public :
		
		
		void setDSLR(char *Nama, char *Series, char *Sensor, float focal, int lensa, int harga){
		
			strcpy (this->Nama, Nama);
			strcpy (this->Series, Series);
			strcpy (this->Sensor, Sensor);
			this->focal	= focal;
			this->lensa = lensa;
			this->harga	= harga;	
		}
		
		void showDSLR(){
			
			cout << "DSLR Nama		=" << Nama << endl;
			cout << "DSLR Series	=" << Series << endl;
			cout << "DSLR Sensor	=" << Sensor << endl;
			cout << "DSLR Focal		=" << focal << endl;
			cout << "DSLR Lensa		=" << lensa << endl;
			cout << "DSLR Harga		=" << harga << endl;
		}
		
		void DisplayDSLR(int ongkir){
			Total = (harga + ongkir + lensa)* 1.1;
			cout << "Total Bayar Seluruh DSLR = Rp." << Total << endl;
		}
};

	int main (){
		ActionCam Satu;
		Satu.setActionCam((char*) "Go Pro", (char*) "Pro 4", (char*) "CarlZeis", 1.4 , 5000000);
		Satu.showSetActionCam();
		Satu.DisplayActionCam(100000);
		
		DSLR Dua;
		Dua.setDSLR((char*) "Canon", (char*) "5 D", (char*) "CarlZeis", 1.4 , 2400000, 5000000);
		Dua.showDSLR();
		Dua.DisplayDSLR(150000);
		getche();
}

