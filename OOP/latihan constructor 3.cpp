#include <iostream>
#include <conio.h>
using namespace std;

class HITUNG{
	int a,b,c;
	public :
		HITUNG(){ // constructor tanpa parameter
			a=2;
			b=2;
		}
		
		HITUNG (int aMasuk, int bMasuk){ // constructor dengan parameter
			a=aMasuk;
			b=bMasuk;
		}
		
		void displayTambah(){
			c=a+b;
			cout <<"Nilai " << a << "+" << b << "=" << c << endl;
		}
};

int main (){
	HITUNG E;
	E.displayTambah();
	
	HITUNG G(5,5);
	G.displayTambah();
	
	getch();
}
/*
int main (){
	HITUNG ht;
	ht.displayTambah();
}
*/
