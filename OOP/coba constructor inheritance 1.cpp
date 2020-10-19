#include <iostream>
using namespace std;

class INDUK {
	int X;
	public :
		INDUK (int X) {
			this->X=X;
			cout << "Constructor Kelas Induk" << endl;
		}
		
		int GetX(){
			return X;
		}
};

class TURUNAN : public INDUK {
	int Y;
	public :
		TURUNAN (int X, int Y) : INDUK(X) {
			// INDUK(X);
			this->Y=Y;
			cout << "Constructor Kelas Turunan" << endl;
		}
		
		int GetY(){
			return Y;
		}
};

int main (){
	TURUNAN A(10,20);
	cout << "Nilai X =" << A.GetX() << endl;
	cout << "Nilai Y =" << A.GetY() << endl;
	return 0;
}
