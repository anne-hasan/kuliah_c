#include <iostream>
using namespace std;


struct Anne {
	char NPM[11];
	char nama[30];
	float ipk;
};

int main(){
	Anne fadila;
	cout << "Nomor Pokok Mahasiswa     = "; cin >> fadila.NPM;
	cout << "Nama Mahasiswa            = "; cin >> fadila.nama;
	cout << "Indeks Prestasi Kumulatif = "; cin >> fadila.ipk;
	cout << endl;

	cout << "------------------------------------------------" << endl;
	cout << "                    Data Anda                   " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Nomor Pokok Mahasiswa     = " << fadila.NPM << endl;
	cout << "Nama Mahasiswa            = " << fadila.nama << endl;
	cout << "Indeks Prestasi Kumulatif = " << fadila.ipk << endl;
	cin.get();
}