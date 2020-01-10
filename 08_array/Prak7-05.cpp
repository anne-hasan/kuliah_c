/**
 * @file 	Prak7-05.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Seperti soal nomer empat (4), Disuatu kampus 10 mahasiswa mengikuti ujian
 * mata kuliah ”Pemrograman I”. Nilai yang dihasilkan oleh ke 10 mahasiswa
 * tersebut adalah 80, 70,50,65, 85, 70, 60, 55, 90, 72. Buatlah input data dari nilai
 * tersebut dan nilai rata-ratanya
 */
#include<iostream>
using namespace std;

int main() 
{
	int nilai[10]    = {80, 70, 50, 65, 85, 70, 60, 55, 90, 72};
	float totalNilai = 0;
	float avgNilai;

	cout << "----------------------------------------" << endl;
	cout << "      Rata-rata nilai Pemrograman I     " << endl;
	cout << "----------------------------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		totalNilai += nilai[i];
	}

	avgNilai = totalNilai / 10;
	
	cout << "Total nilai : " << totalNilai << endl;
	cout << "Rata-rata   : " << avgNilai << endl;
	
	cin.get();
}