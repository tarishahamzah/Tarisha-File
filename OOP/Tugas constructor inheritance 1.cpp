#include <iostream>
using namespace std;

class MataKuliah {
	public :
		MataKuliah() {
			
			cout << "Constructor Mata Kuliah" << endl;
		}
		
};

class OOP {
	int O;
	public :
		OOP (int O){
			this->O = O;
			
		cout << "Constructor Kelas OOP" << endl;
		}
		
		int GetOOP(){
			return O;
		}
};

class Statistik{
	int S;
	public :
		Statistik (int S) {
			this->S = S;
		
		cout << "Constructor Kelas Statistik" << endl;
		}
		
		int GetStatistik(){
			return S;
		}
};

class Tampilan : public MataKuliah, public OOP, public Statistik {
	int NilaiSeluruh;
	public :
		Tampilan(int O, int S) : MataKuliah (), OOP (O), Statistik (S) {
			NilaiSeluruh = O + S;
		
			
			if (NilaiSeluruh == 200) {
				cout << "IP Anda 4 dan Anda Lulus" << endl;
			}
			else if (NilaiSeluruh <= 200 && NilaiSeluruh >= 140) {
				cout << "IP Anda Lumayan dan Anda Lulus Mata Kuliah" << endl;
			}
			else if (NilaiSeluruh < 140) {
				cout << "IP Anda Rendah dan Anda Harus Mengulang Mata Kuliah" << endl;
			}
			
				cout << "Nilai Seluruh = " << NilaiSeluruh << endl;
		}
};

	int main (){
		Tampilan Hasil(50,60);
		cout << "Hasil yang diperoleh OOP = " << Hasil.GetOOP() << endl;
		cout << "Hasil yang diperoleh Statistik = " << Hasil.GetStatistik() << endl; 
		return 0;
	}
