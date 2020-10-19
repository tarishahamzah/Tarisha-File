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

int main (){
	KARYAWAN *P;
	
	P = new PROGRAMMER;
	P->Bekerja();
	delete P;
	
	cout << "\n";
	
	P = new GURU;
	P->Bekerja();
	delete P;
	
	return 0;
}
