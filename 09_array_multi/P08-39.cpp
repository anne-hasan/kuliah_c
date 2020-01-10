/**
 * @file 	P08-39.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */

#include<iostream>
using namespace std;

int main() 
{
	int matrixA[2][2] = {
						{2, 4}, 
						{3, 2}
					};

	int matrixB[2][2] = {
						{2, 5}, 
						{4, 6}
					};

	int matrixC[2][2];

	// Proses perkalian matrix
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matrixC[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}			
		}
	}

	// Output hasil perkalian matrix
	cout << "Hasil perkalian matrix A dan matrix B adalah : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matrixC[i][j] << "  ";
		}

		cout << endl;
	}

	cin.get();
}