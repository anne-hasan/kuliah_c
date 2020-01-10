/**
 * @file 	P08-60.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */

#include<iostream>
using namespace std;

int main() 
{
	int matrix[3][3];
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			matrix[row][col] = 0;
			if (col > row - 1) {
				cout << "Masukkan nilai baris " << row << " kolom " << col << " : ";
				cin >> matrix[row][col];
			}
		}
	}

	cout << "Bentuk segitiga : " << endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			if (col > row - 1)
				cout << " " << matrix[row][col];
			else
				cout << "  ";
		}

		cout << endl;
	}


	cin.get();
}