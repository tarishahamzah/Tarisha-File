#include <iostream>
using namespace std;

class INDUK1 {
	int X;
	public :
		INDUK1(int X) {
			this->X=X;
			cout << "Constructor Kelas Induk 1" << endl;
		}
		
		int GetX(){
			return X;
		}
};

class INDUK2 {
	int Y;
	public :
		INDUK2 (int Y){
			this->Y=Y;
			cout << "Constructor Kelas Induk 2" << endl;
		}
		
		int GetY(){
			return Y;
		}
};

class TURUNAN : public INDUK1, public INDUK2 {
	int Z;
	public :
		TURUNAN (int X, int Y, int Z):
		INDUK1 (X), INDUK2 (Y) {
			this->Z=Z;
			cout << "Constructor Kelas Turunan" << endl;
		}
		
		int GetZ(){
			return Z;
		}
};

int main (){
	TURUNAN A(10,20,30);
	cout << "Nilai X =" << A.GetX() << endl;
	cout << "Nilai Y =" << A.GetY() << endl;
	cout << "Nilai Z =" << A.GetZ() << endl;
	return 0;
}
