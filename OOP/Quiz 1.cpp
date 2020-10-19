#include <iostream>
using namespace std;

class Biaya {
	public:
		// Data Member
		int calculate;
		int harga_makanan;
		int km;
		// Member Function
		
		int GoSend (int km){
			calculate = 6000*km;
			cout << "GoSend = Rp." << calculate << endl;
		}
		
		int GoCar (int km){
			calculate = 12000*km;
			cout << "Gocar = Rp." << calculate << endl;
		}
		
		int GoJek (int km){
			calculate = 6000*km;
			cout << "GoJek = Rp." << calculate << endl;
		}
		
		int GoFood (int km, int harga_makanan){
			calculate = 5000*km + harga_makanan;
			cout << "GoFood = Rp." << calculate << endl;
		}
};

	int main (){
		Biaya Jerry, Ricky, Rony;
		Jerry.GoSend(11); 
		Ricky.GoCar(20);
		Ricky.GoJek(15);
		Rony.GoFood(5,25000);
		
		return 0;
	}
