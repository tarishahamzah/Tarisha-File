#include <iostream>
using namespace std;

class CONTOH{
	int a;
	int b;
	
	public:
			void setNilai (int aMasuk, int bMasuk){
			a=aMasuk;
			b=bMasuk;
			}
		void display (){
		cout << "Nilai a =" << a << endl;
		cout << "Nilai b =" << b << endl;			
		}
};

int main (){
	CONTOH Nilai;
	Nilai.setNilai(5,4);
	Nilai.display();
	return 0;
}
