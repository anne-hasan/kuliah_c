/**
 * @file 	Prak2-21.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Jika Total Belanja > 5jt, maka mendapat diskon 5% dari total belanja tetapi kalau
 * diskon=0
 */

#include<iostream>
#include <math.h>

using namespace std;

int main()
{
	int anne, fadila, hasan;

	cout<<"======================================="<<endl;
	cout<<"Masukkan total belanja : Rp "; 
	cin >> anne;
	
	if (anne > 5000000) {
		fadila = 5;
		hasan  = anne - round(anne * 0.05);
	} else {
		fadila = 0;
		hasan  = anne;
	}
	
	cout<<"======================================="<<endl;
	cout<<"Total         : Rp"<<anne<<endl;
	cout<<"Discount      : "<<fadila<<"%"<<endl;
	cout<<"Grand Total   : Rp"<<hasan<<endl;
	
	cin.get();
}