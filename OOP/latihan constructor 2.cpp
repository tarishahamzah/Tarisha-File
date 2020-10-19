#include <iostream>
using namespace std;

class HITUNG{
	int a,b,c;
	public :
		HITUNG(){
			a=2;
			b=2;
		}
		
		void getNilai (int aMasuk, int bMasuk){
			a=aMasuk;
			b=bMasuk;
		}
		
		void displayTambah(){
			c=a+b;
			cout <<"Nilai " << a << "+" << b << "=" << c;
		}
};

int main (){
	HITUNG ht;
	ht.getNilai(5,4);
	ht.displayTambah();
	return 0;
}
/*
int main (){
	HITUNG ht;
	ht.displayTambah();
}
*/
