#include <iostream>
using namespace std;

class anjing{
	int ukuran;
	int warna;
	char jenis_kelamin;
	char jenis_ras;
	
	void menggonggong (){
		cout <<"guk,,guk,,guk,,guk" << endl;
	}
	
	void minum (){
		cout <<"slurp,,slurp,,slurp,,slurp" << endl; 
	}
	
	void makan (){
		cout <<"nyam..nyam..nyam..nyam" << endl;
	}
	
	void tidur (){
		cout <<"zzz..zzz.zzz..zz..zz.z" << endl;
	}
	
};

int main (){
	anjing husky;
	husky.menggonggong();
	husky.minum();
	husky.makan();
	husky.tidur();
	
	getche();
	return 0;
}

// Masih Salah
