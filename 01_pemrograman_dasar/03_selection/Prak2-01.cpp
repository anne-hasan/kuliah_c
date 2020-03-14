/**
 * @file 	Prak2-10.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Jika seseorang memiliki gaji >5.000.000 maka dikategorikan orang kaya
 */
#include<iostream>
using namespace std;

int main()
{
	long gajiAnne;
	cout<<"======================================="<<endl;
	
	cout<<"Masukkan gaji Anda: "; 
	cin >> gajiAnne;

	cout<<"======================================="<<endl;
	cout<<endl;

	if (gajiAnne > 5000000)
		cout << "Wah orang kaya!"<< endl;
	cin.get();
}