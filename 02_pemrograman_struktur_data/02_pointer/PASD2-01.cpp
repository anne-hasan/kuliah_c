#include <iostream>
using namespace std;

struct Alamat {
    string Jalan, Kota;
    int KodePos;
};

struct Lahir {
    int Tanggal, Bulan, Tahun;
};

struct KTP {
	int NoKtp;
    string Nama;
    Alamat *DataAlamat;
    Lahir DataLahir;
};


int main() {
    KTP *JatiDiri;
    JatiDiri = new KTP;
    DataAlamat = new Alamat;
    KTP 

    // Input
	cout << "Masukkan No KTP = "; cin >> JatiDiri->NoKtp;
	cout << "Masukkan Nama   = "; cin >> JatiDiri->Nama;
    cout << endl;

    cout << "Alamat" << endl;
    cout << " - Jalan        = "; cin >> JatiDiri->DataAlamat->Jalan;
    cout << " - Kota         = "; cin >> JatiDiri->DataAlamat->Kota;
    cout << " - Kode Pos     = "; cin >> JatiDiri->DataAlamat->KodePos;
    
    cout << "Tanggal Lahir" << endl;
    cout << " - Tanggal      = "; cin >> JatiDiri->DataLahir.Tanggal;
    cout << " - Bulan        = "; cin >> JatiDiri->DataLahir.Bulan;
    cout << " - Tahun        = "; cin >> JatiDiri->DataLahir.Tahun;
    cout << endl;
    cout << endl;

    // Output
    cout << "No KTP          = " << JatiDiri->NoKtp << endl;
    cout << "Nama            = " << JatiDiri->Nama << endl;
    cout << "Alamat          = " << JatiDiri->DataAlamat->Jalan << ", '"
                                 << JatiDiri->DataAlamat->Kota << ", '"
                                 << JatiDiri->DataAlamat->KodePos << endl;
    cout << "Tanggal Lahir   = " << JatiDiri->DataLahir.Tanggal << ", "
                                 << JatiDiri->DataLahir.Bulan << ", "
                                 << JatiDiri->DataLahir.Tahun << endl;
	cin.get();
}