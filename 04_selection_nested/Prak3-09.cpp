/**
 * @file 	Prak3-09.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Seseorang mempunyai 3 Aktifitas yang terdiri dari :
 * 1 : maka aktifitas Anda “Makan”
 * 2 : maka aktifitas Anda “Minum”
 * 3 : maka aktifitas Anda “Mandi”
 * Bila memilih diluar dari 3 aktifitas ini akan berkomentar “Anda Diam”
 */
#include<iostream>
using namespace std;

int main() 
{
	int anne;

	cout << "----------------------------------------" << endl;
	cout << "1. Makan"<<endl;
	cout << "2. Minum"<<endl;
	cout << "3. Mandi"<<endl;
	cout<<endl;

	cout << "Pilih aktivitas : "; 
	cin >> anne;
	cout << "----------------------------------------" << endl;

	if (anne == 1) {
		cout << "Anda Makan" << endl;
	} else if (anne == 2) {
		cout << "Anda Minum" << endl;
	} else if (anne == 3) {
		cout << "Anda Mandi" << endl;
	} else {
		cout << "Anda Diam" << endl;
	}

	cin.get();
}