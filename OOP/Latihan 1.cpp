#include <iostream>
using namespace std;

int LuasPersegi (int p, int l){
    int luas;
    luas = p*l;
    return luas;
}

int main()
{
    int a,b;

    cout << "masukkan panjang: "; cin >> a;
    cout << "masukkan lebar: "; cin >> b;

    cout << "Luas Persegi: " << LuasPersegi(a,b);
    return 0;
}
