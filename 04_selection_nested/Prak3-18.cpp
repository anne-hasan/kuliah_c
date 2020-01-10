/**
 * @file 	Prak3-18.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Untuk menampilkan pilihan nilai, Pilihan A mencetak “sangat baik”, 
 * pilihan B mencetak “baik”, pilihan C mencetak “cukup”, 
 * pilihan D mencetak “kurang”, pilihan E “ gagal”. 
 * Jika selain pilihan diatas mencetak “huruf yang 
 * anda masukan salah” 
 */
#include<iostream>
using namespace std;

int main() 
{
	char anne;

	cout << "----------------------------------------" << endl;
	cout << "A - Sangat Baik"<<endl;
	cout << "B - Baik"<<endl;
	cout << "C - Cukup"<<endl;
	cout << "D - Kurang"<<endl;
	cout << "E - Gagal"<<endl;
	cout<<endl;

	cout << "Pilih nilai : "; 
	cin >> anne;
	cout << "----------------------------------------" << endl;

	if (anne == 'A') {
		cout << "Sangat Baik" << endl;
	} else if (anne == 'B') {
		cout << "Baik" << endl;
	} else if (anne == 'C') {
		cout << "Cukup" << endl;
	} else if (anne == 'D') {
		cout << "Kurang" << endl;
	} else if (anne == 'E') {
		cout << "Gagal" << endl;
	} else {
		cout << "Huruf yang Anda masukkan salah" << endl;
	}

	cin.get();
}