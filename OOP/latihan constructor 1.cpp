#include <iostream>
using namespace std;

class HALOO {
	public:
		HALOO() {
			cout <<"Hallo saya constructor \n Otomatis dipanggil \n \n";
		}
		void tampilkanKata (){
			cout <<"Hallo saya method biasa \n Harus dipanggil \n \n";
		}
};

int main (){
	HALOO a; // menggunakan haloo data akan otomatis terpanggil
	a.tampilkanKata(); // data harus dipanggil menggunakan '.'
	return 0;
}
