/**
 * @file 	P08-26.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */
#include<iostream>
using namespace std;

int main() 
{
	int tahun, matkul;
	int nilai[3][5] = {
						{2002, 99, 14, 9, 11}, 
						{2003, 245, 12, 89, 111}, 
						{2004, 111, 125, 999, 1250}
					};

	cout << "Masukkan tahun dari data yang ingin Anda ketahui";
	cout << "[2002...[2004] : "; 
	cin >> tahun;
	cout << endl;

	cout << "Masukkan kode program berdasarkan mata kuliah" << endl
		 << "Sesuai yang Anda inginkan." << endl
		 << "1 = Algo by Pascal" << endl
		 << "2 = Algo by C++ " << endl
		 << "3 = Algo by Java " << endl
		 << "4 = Algo by VB " << endl
		 << "mata kuliah : ";
	cin >> matkul;
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		if (nilai[i][0] == tahun) {
			cout << "Total kelulusan : " << nilai[i][matkul] << endl;
		}
	}

	cin.get();
}