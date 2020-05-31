#include <iostream>
#include <string>
using namespace std;

typedef int angka;
typedef float pecahan;
typedef char huruf[30];
int main(){
	angka anne;
	pecahan fadila;
	huruf hasan;
	huruf dila;
	
	cout << "Masukkan umur anda : "; cin >> anne;
	cout << "Umur Anda adalah " << anne << endl;
	cout << endl;

	cout << "Masukkan bilangan pecahan : "; cin >> fadila;
	cout << "Bilangan pecahan " << fadila << endl;
	cout << endl;

	cout << "Masukkan nama : "; cin >> hasan;
	cout << "Nama anda " << hasan << endl;
	cout << endl;

	cout << "Masukkan satu huruf : "; cin >> dila;
	cout << "Huruf anda " << dila << endl;
	cout << endl;

	cin.get();
}