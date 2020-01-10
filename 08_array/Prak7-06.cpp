/**
 * @file 	Prak7-06.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Buat input data dengan array, untuk abjad a-z
 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	char data[26];
	
	cout << "huruf : " << endl;
	for (int i = 0; i < 26; i++)
	{
		cout << i + 1 << " : "; 
		cin >> data[i];
	}

	cin.get();
}