/**
 * @file 	Prak1-17.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Hitung jarak antara dua titik
 */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	double lutfi, anne, fadila, hasan, keren;

	cout<<"======================================="<<endl;
	cout<<"              Rumus Jarak              "<<endl;
	cout<<"======================================="<<endl;
	
	cout<<"Masukkan nilai x1 = "; 
	cin >> lutfi;
	
	cout<<"Masukkan nilai x2 = "; 
	cin >> anne;

	cout<<"Masukkan nilai y1 = "; 
	cin >> fadila;

	cout<<"Masukkan nilai y2 = "; 
	cin >> hasan;

	keren = sqrt(pow((anne - lutfi), 2) + pow((hasan - fadila), 2));
	cout<<"======================================="<<endl;
	cout << "Hasil = " << keren << endl;
	cout << endl;
	
	cin.get();
}