#include <iostream>
using namespace std;

// Pendeklarasian tipe data baru struct Mahasiswa
struct Budi_bestara{
		char Bu[9];
		char Di[30];
		float Budi;
	};
int main(){
	//Buat Variabel mhs bertipe data Mahasiswa
	Budi_bestara mhs;
	cout << "Nomor Pokok Mahasiswa = "; cin >> mhs.Bu;
	cout << " Nama Mahasiswa = "; cin >> mhs.Di;
	cout << " Indek Prestasi Komulatif = "; cin >> mhs.Budi;
	cout << endl;
	cout << "~~~~~~~~~~~~" << endl;
	cout << "				Data Anda	" << endl;
	cout << "~~~~~~~~~~~~" << endl;
	cout << " Nomor Pokok Mahasiswa = " << mhs.Bu << endl;
	cout << " Nama Mahasiswa = " << mhs.Di << endl;
	cout << " Indek Prestasi Komulatif = " << mhs.Budi << endl;
	cin.get();
}