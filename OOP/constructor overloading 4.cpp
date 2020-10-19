#include <iostream>
using namespace std;

class KARYAWAN {
	public :
		virtual void Bekerja() = 0;
};

class PROGRAMMER : public KARYAWAN {
	public :
		void Bekerja(){
			cout << "Bekerja dengan cara membuat program" << " menggunakan komputer" << endl;
		}
};

class GURU : public KARYAWAN {
	public :
		void Bekerja(){
			cout << "Bekerja dengan cara mengajar" << " di depan kelas " << endl;
		}
};

class DOKTER : public KARYAWAN {
	public :
		void Bekerja (){
			cout << "Bekerja dengan cara menyembuhkan orang sakit " << "di rumah sakit" << endl;
		}
		
};


class WIRASWASTA : public KARYAWAN {
	public :
		void Bekerja (){
			cout << "Bekerja dengan cara membuka usaha " << "di rumah atau kantor" << endl;
		}
		
};


class PENYANYI : public KARYAWAN {
	public :
		void Bekerja (){
			cout << "Bekerja dengan cara menyanyi " << "di panggung acara" << endl;
		}
		
};

int main (){
	KARYAWAN *P;
	
	P = new PROGRAMMER;
	P->Bekerja();
	delete P;
	
	cout << "\n";
	
	P = new GURU;
	P->Bekerja();
	delete P;
	
	cout << "\n";
	
	P = new DOKTER;
	P->Bekerja();
	delete P;
	
	cout << "\n";
	
	P = new WIRASWASTA;
	P->Bekerja();
	delete P;
	
	cout << "\n";
	
	P = new PENYANYI;
	P->Bekerja();
	delete P;
	
	return 0;
}
