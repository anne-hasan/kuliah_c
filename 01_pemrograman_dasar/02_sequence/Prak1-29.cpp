/**
 * @file 	Prak1-29.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int anne, fadila, fact, i;
	double keren;

	anne   = 2;
	fadila = 4;

	cout<<"======================================="<<endl;
	
	// Hitung faktorial
	fact = 1;
	for (i = 1; i <= 2; i++)
	{
		fact *= i;
	}

	keren = (anne*(anne - 1) + pow(fadila, 2))/fact;
	cout << "Rumus = (n(n - 1) + x^2) / 2!"<< endl << endl;
	cout << "Nilai n = " << anne << endl;
	cout << "Nilai x = " << fadila << endl << endl;
	cout << "Hasil = " << keren << endl;
	cout << endl;
	
	cin.get();
}