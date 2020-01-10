/**
 * @file 	Prak4-16.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Pada akhir semester setelah nilai ujian semua mata kuliah 
 * tersedia maka prestasi akademik mahasiswa dapat dihitung 
 * dalam bentuk IPS (Indeks Prestasi Semester). 
 * Tampilkan IPS tertinggi dan jumlah mahasiswa yang mendapat
 * IPS tertinggi tersebut. Masukan terdiri dari sejumlah IPS. 
 * Misalkan data yang diolah adalah 28 56 78 43 78 30 maka 
 * keluarannya adalah 78 2 orang. 
 */
#include<iostream>
using namespace std;

int main() 
{
	int i, max, counterMax, nilaiSiswa, jmlSiswa;
	i   = 1;
	max = 0;
	
	cout << "----------------------------------------" << endl;
	cout << "Masukan jumlah siswa : "; 
	cin >> jmlSiswa;
	cout << "----------------------------------------" << endl;

	do {

		cout << "Masukan nilai siswa ke-" << i << " : ";
		cin >> nilaiSiswa;
		cout << endl;

		if (nilaiSiswa > max) {
			max        = nilaiSiswa;
			counterMax = 0;
		}

		if (nilaiSiswa == max) {
			counterMax++;
		}

		i++;
	} while (i <= jmlSiswa);

	cout << "----------------------------------------" << endl;
	cout << "Nilai terbesar : " << max << endl;
	cout << "Jumlah siswa   : " << counterMax << " orang" << endl;
	
	cin.get();
}