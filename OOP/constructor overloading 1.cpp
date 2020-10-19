#include <iostream>
#include <conio.h>
using namespace std;

class AREA{
	public :
		AREA (int S) {
			cout << "Area Persegi Adalah = " << S*S << endl;
		}
		
		AREA (int P, int L){
			cout << "Area Persegi Panjang = " << P*L << endl;
		}
		
		AREA (double R){
			cout << "Area Lingkaran Adalah = " << 3.14*R*R << endl;	
		}
};

int main (){
	AREA A(5);
	getch();
	return 0;
}

/*
int main (){
	AREA E(5,4);
	getch();
	return 0;
}

int main (){
	AREA A(3.34);
	getch();
	return 0;
}
*/

