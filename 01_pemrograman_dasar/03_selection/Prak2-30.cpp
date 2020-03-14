/**
 * @file 	Prak2-30.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Menentukan bilangan yang dimasukan apakah bilangan ganjil atau genap
 */


#include<iostream>
#include <math.h>

using namespace std;

int main()
{
	int anne;

	cout<<"======================================="<<endl;
	cout<<"Masukkan angka : "; 
	cin >> anne;
	
	cout<<"======================================="<<endl;

	if (anne % 2 == 0) {
		cout<<"Bilangan genap" << endl;
	} else {
		cout<<"Bilangan ganjil" << endl;
	}
	
	cin.get();
}