#include <iostream>
using namespace std;

class Panjang {
	int P;
	public :
		Panjang(int P) {
			this->P=P;
			
			cout << "Constructor Kelas Panjang" << endl;
		}
		
		int GetP(){
			return P;
		}
};

class Lebar {
	int L;
	public :
		Lebar (int L){
			this->L=L;
			cout << "Constructor Kelas Lebar" << endl;
		}
		
		int GetL(){
			return L;
		}
};

class Tinggi {
	int T;
	public :
		Tinggi (int T) {
			this->T=T;
			cout << "Constructor Kelas Tinggi" << endl;
		}
		
		int GetT(){
			return T;
		}
};

class TURUNAN : public Panjang, public Lebar, public Tinggi {
	int luas, volume, keliling;
	public :
		TURUNAN (int P, int L, int T): Panjang (P), Lebar (L), Tinggi (T){
		
		luas = 2*((P*L) + (P*T) + (L*T));
		volume = P * L * T;
		keliling = 4*(P + L + T);
	}
		int GetLuas(){
			return luas;
		}
		
		int GetVolume(){
			return volume;
		}
		
		int GetKeliling(){
			return keliling;
		}
};

int main (){
	TURUNAN A(5,4,3);
	cout << "Luas = " << A.GetLuas() << endl;
	cout << "Volume = " << A.GetVolume() << endl;
	cout << "Keliling = " << A.GetKeliling() << endl;
	return 0;
}
