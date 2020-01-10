/**
 * @file 	Prak3-50.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com 
 */
#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
	char selectMenu;
	int selectSubmenu;
	float sisi, a, b, c, luasSegiempat, kelilingSegiempat, luasSegitiga, kelilingSegitiga;

	cout << "                   Menu                 " << endl;
	cout << "----------------------------------------" << endl;
	cout << "A. Segiempat "<<endl;
	cout << "B. Segitiga "<<endl;
	cout << "C. Exit "<<endl;
	cout<<endl;

	cout << "Pilih [A/B/C] : "; cin >> selectMenu;

	switch(selectMenu) {
		case 'A':
			cout << "1. Luas Segiempat" << endl;
			cout << "2. Keliling Segiempat" << endl;
			cout << "3. Kembali ke Menu Utama" << endl;
			cout << endl;
			
			cout << "Pilih [1/2/3] : "; cin >> selectSubmenu;
			cout << endl;

			switch(selectSubmenu) {
				case 1:
					cout << "Masukkan ukuran sisi segiempat : "; cin >> sisi;
					cout << endl;

					luasSegiempat = sisi * sisi;
					cout << "Luas segiempat = "<< luasSegiempat << endl;
					break;
				case 2:
					cout << "Masukkan ukuran sisi segiempat : "; cin >> sisi;
					cout << endl;

					kelilingSegiempat = 4 * sisi;
					cout << "Keliling segiempat = "<< kelilingSegiempat << endl;
					break;
				case 3:
					cout << "Kembali ke menu utama" << endl;
					break;
				default:
					cout << "Menu tidak tersedia" << endl;
					break;
			}

			break;
		case 'B':
			cout << "1. Luas Segitiga" << endl;
			cout << "2. Keliling Segitiga" << endl;
			cout << "3. Kembali ke Menu Utama" << endl;
			cout << endl;
			
			cout << "Pilih [1/2/3] : "; cin >> selectSubmenu;
			cout << endl;
			switch(selectSubmenu) {
				case 1:
					cout << "Masukkan ukuran alas : "; cin >> a;
					cout << endl;
					cout << "Masukkan ukuran tinggi : "; cin >> b;
					cout << endl;

					luasSegitiga = a * b * 1/2;
					cout << "Luas segitiga = "<< luasSegitiga << endl;
					break;
				case 2:
					cout << "Masukkan ukuran sisi a : "; cin >> a;
					cout << endl;
					cout << "Masukkan ukuran sisi b : "; cin >> b;
					cout << endl;
					cout << "Masukkan ukuran sisi c : "; cin >> c;
					cout << endl;

					kelilingSegitiga = a + b + c;
					cout << "Keliling segitiga = "<< kelilingSegitiga << endl;
					break;
				case 3:
					cout << "Kembali ke menu utama" << endl;
					break;
				default:
					cout << "Menu tidak tersedia" << endl;
					break;
			}

			break;
		case 'C':
			cout << "Keluar dari program" << endl;
			break;
		default:
			cout << "Menu tidak tersedia" << endl;
			break;
	}

	cin.get();
}