// Berdasarkan program yang ada pada contoh 3, lakukan penginputan data
// sebanyak 5 data, dan perbaiki program agar semua data yang diinput tampil
// (nama file : PASD1-09.ccp):

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Anne {
	string nama[20], alamat[20], gender[2], telp[20];
	int umur[3];
};

Anne data;

int main() {
	int jumlah, i;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "--------------------------------------------------" << endl;
		cout << "Data ke-" << i+1 << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Nama                : "; cin >> data.nama[i];
		cout << "Alamat              : "; cin >> data.alamat[i];
		cout << "Umur                : "; cin >> data.umur[i];
		cout << "Jenis Kelamin [L/P] : "; cin >> data.gender[i];
		cout << "Nomor telepon       : "; cin >> data.telp[i];

		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "                 Data Pelanggan Toko              " << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "|   Nama   |  Alamat  | Umur | Gender |  No Telp |" << endl;
	cout << "--------------------------------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "--------------------------------------------------" << endl;
		cout << "Data ke-" << i+1 << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Nama                : " << data.nama[i] << endl;
		cout << "Alamat              : " << data.alamat[i] << endl;
		cout << "Umur                : " << data.umur[i] << endl;
		cout << "Jenis Kelamin [L/P] : " << data.gender[i] << endl;
		cout << "Nomor telepon       : " << data.telp[i] << endl;

		cout << endl;
	}

	cin.get();
}