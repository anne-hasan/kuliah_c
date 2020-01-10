/**
 * @file 	P08-07.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Berdasarkan soal no2, Jumlahkan kolom matrik/array nya
 */
#include<iostream>
using namespace std;

int main() 
{
	int nilai[2][7];
	int totalNilaiKolom;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << "Masukkan angka pada baris ke " << i << " kolom ke " << j << " : ";
			cin >> nilai[i][j];
		}
	}

	cout << endl;
	cout << "---------------------------------------------" << endl;
	cout << endl;

	for (int i = 0; i < 7; i++)
	{	
		totalNilaiKolom = 0;
		for (int j = 0; j < 2; j++)
		{
			totalNilaiKolom += nilai[j][i];
		}

		cout << "Total nilai kolom ke " << i << " : " << totalNilaiKolom << endl;

	}

	cin.get();
}