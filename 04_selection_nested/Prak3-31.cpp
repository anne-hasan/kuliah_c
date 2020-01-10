/**
 * @file 	Prak3-31.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Berdasarkan soal nomer satu, Anda buat Tampilan dari Huruf ”A” sampai dengan
 * ”Z”. Jika pengguna memasukkan nilai diluar jangkauan 1-26, program 
 * menampilkan “Huruf tidak valid” .
 */
#include<iostream>
using namespace std;

int main() 
{
	int anne;

	cout << "----------------------------------------" << endl;
	cout << "Masukkan angka : "; cin >> anne;
	cout << "----------------------------------------" << endl;

	switch(anne) {
		case 1: 
			cout << 'A' << endl; break;
		case 2: 
			cout << 'B' << endl; break;
		case 3: 
			cout << 'C' << endl; break;
		case 4: 
			cout << 'D' << endl; break;
		case 5: 
			cout << 'E' << endl; break;
		case 6: 
			cout << 'F' << endl; break;
		case 7: 
			cout << 'G' << endl; break;
		case 8: 
			cout << 'H' << endl; break;
		case 9: 
			cout << 'I' << endl; break;
		case 10: 
			cout << 'J' << endl; break;
		case 11: 
			cout << 'K' << endl; break;
		case 12: 
			cout << 'L' << endl; break;
		case 13: 
			cout << 'M' << endl; break;
		case 14: 
			cout << 'N' << endl; break;
		case 15: 
			cout << 'O' << endl; break;
		case 16: 
			cout << 'P' << endl; break;
		case 17: 
			cout << 'Q' << endl; break;
		case 18: 
			cout << 'R' << endl; break;
		case 19: 
			cout << 'S' << endl; break;
		case 20: 
			cout << 'T' << endl; break;
		case 21: 
			cout << 'U' << endl; break;
		case 22: 
			cout << 'V' << endl; break;
		case 23: 
			cout << 'W' << endl; break;
		case 24: 
			cout << 'X' << endl; break;
		case 25: 
			cout << 'Y' << endl; break;
		case 26: 
			cout << 'Z' << endl; break;
		default:
			cout << "Huruf tidak valid" << endl;break;
	}

	cin.get();
}