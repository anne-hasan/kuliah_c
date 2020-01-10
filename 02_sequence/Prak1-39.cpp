/**
 * @file 	Prak1-39.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Ubahlah ekspresi matematik : E = m.c2
 */
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int anne, fadila, keren;

	cout<<"======================================="<<endl;
	cout << "E = m.c^2"<< endl << endl;
	
	cout<<"Masukkan nilai m = "; 
	cin >> anne;
	
	cout<<"Masukkan nilai c = "; 
	cin >> fadila;


	keren = anne * pow(fadila, 2);
	cout << "Hasil = " << keren << endl;
	cout << endl;
	
	cin.get();
}