#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct trans {
	string nama, alamat, telp;
    int totalQty, totalPrice;
    detailTrans dataDetailTrans;
};

struct detailTrans {
    int harga, qty, subTotal;
    string kode, nama;
};

trans dataTrans;
int main() {
	int totalPelanggan, totalProd, i;
    cout << "Jumlah pelanggan : ";
    cin >> totalPelanggan;
	cout << endl;
	for (int i = 0; i < totalPelanggan; i++)
	{
        totalProd = 1;
		cout << "--------------------------------------------------" << endl;
		cout << "PELANGGAN KE -" << i + 1 << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "DATA DIRI PELANGGAN " << endl;
		cout << "Nama         : "; cin >> dataTrans.nama[i];
		cout << "Alamat       : "; cin >> dataTrans.alamat[i];
		cout << "Telepon      : "; cin >> dataTrans.telp[i];
		cout << "Total Produk : "; cin >> totalProd;
        cout << endl;
        cout << endl;
		cout << "DATA DIRI PELANGGAN " << endl;

		cout << endl;


        data.nilaiAkhir[i] = (data.nilaiQuiz[i] + data.nilaiUTS[i] + data.nilaiUAS[i])/3;
        if (data.nilaiAkhir[i] >= 80) {
            data.index[i] = "A";
        } else if (data.nilaiAkhir[i] >= 76 && data.nilaiAkhir[i] < 80) {
            data.index[i] = "A-";
        } else if (data.nilaiAkhir[i] >= 72 && data.nilaiAkhir[i] < 76) {
            data.index[i] = "B+";
        } else if (data.nilaiAkhir[i] >= 68 && data.nilaiAkhir[i] < 72) {
            data.index[i] = "B";
        } else if (data.nilaiAkhir[i] >= 64 && data.nilaiAkhir[i] < 68) {
            data.index[i] = "B-";
        } else if (data.nilaiAkhir[i] >= 64 && data.nilaiAkhir[i] < 68) {
            data.index[i] = "B-";
        } else if (data.nilaiAkhir[i] >= 60 && data.nilaiAkhir[i] < 64) {
            data.index[i] = "C+";
        } else if (data.nilaiAkhir[i] >= 56 && data.nilaiAkhir[i] < 60) {
            data.index[i] = "C";
        } else if (data.nilaiAkhir[i] >= 45 && data.nilaiAkhir[i] < 56) {
            data.index[i] = "D";
        } else if (data.nilaiAkhir[i] < 45) {
            data.index[i] = "E";
        } 
	}

	cout << endl;
	cout << endl;
	cout << "Data yang telah dimasukkan adalah : " << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "|     NIM     |    Nama    |  Quiz  |  UTS  |  UAS  |   NA   |  Index  |" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	for (int i = 0; i < totalPelanggan; i++)
	{
		cout << setw(10) << data.nim[i]
             << setw(10) << data.nama[i] 
             << setw(10) << data.nilaiQuiz[i]
             << setw(10) << data.nilaiUTS[i] 
             << setw(10) << data.nilaiUAS[i] 
             << setw(10) << data.nilaiAkhir[i]
             << setw(10) << data.index[i]
             << setw(10)
             << endl;

		cout << endl;
	}

	cin.get();
}