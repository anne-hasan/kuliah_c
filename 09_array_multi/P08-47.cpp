/**
 * @file 	P08-47.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */

#include<iostream>
using namespace std;

int main() 
{
	int matrixA[4][4];
	int matrixB[4][4];
	int matrixC[4][4];

	cout << "Input matrix A" << endl;
	cout << "--------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Nilai baris " << i + 1 << " kolom " << j + 1 << " : ";
			cin >> matrixA[i][j];
		}
	}

	cout << endl;

	cout << "Input matrix B" << endl;
	cout << "--------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Nilai baris " << i + 1 << " kolom " << j + 1 << " : ";
			cin >> matrixB[i][j];
		}
	}

	// Proses perkalian matrix
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrixC[i][j] = 0;
			for (int k = 0; k < 4; k++)
			{
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}			
		}
	}

	cout << endl;

	// Output hasil perkalian matrix
	cout << "Hasil perkalian matrix A dan matrix B adalah : " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrixC[i][j] << "  ";
		}

		cout << endl;
	}

	cin.get();
}