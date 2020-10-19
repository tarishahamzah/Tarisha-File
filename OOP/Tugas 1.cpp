#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main () {
	// Program Tebak Kata
	// Deklarasikan
	char Kata[50] = "mama";
	char S[50];
	int jumlah;
	
	cout << "Hints = Saya Perempuan dan Saya Adalah Orang Penting Di Hidup Anda" << endl;
	
	// Input 1 Kata
	cout << "Input Kata Tebakkan : "; 
	gets (S);
	
	// Cek apakah kata yang d input sesuai
	jumlah = strcmp (Kata,S);
	
	if (jumlah == 0) {
		cout << "Anda Benar" << endl;
	}
	else {
		cout << "Anda Salah" << endl;
	}
	
	cout << " Nilai Yang Dikembalikan = " << jumlah << endl;
	
	// Jumlah Kata
	cout << " Jumlah Huruf yang di Input Kata = " <<strlen (Kata) << endl;
	cout << " Jumlah Huruf yang di Input S = " <<strlen (S) << endl;
	
	getche();
}

