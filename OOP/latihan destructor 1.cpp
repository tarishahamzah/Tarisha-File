#include <iostream>
using namespace std;

class CONTOH{
	int *a;
	public :
		CONTOH (int aMasuk){
			a = new int; // Memesan Ruang Memory
			*a = aMasuk;
		}
		
		~CONTOH(){
			delete a; // menghapus pointer X
		}
		
		void Display(){
			cout <<"Nilai a :" << *a << endl;
		}
};

int main () {
	CONTOH O(10);
	O.Display();
	return 0;
}
