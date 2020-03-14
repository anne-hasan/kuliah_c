#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Class
struct nilaiASD {
	string nim[20], nama[20], index[20];
    int nilaiQuiz[20], nilaiUTS[20], nilaiUAS[20];
    float nilaiAkhir[20];
};

nilaiASD data;

int main() {
	int jumlah, i;
    cout << "Jumlah mahasiswa : ";
    cin >> jumlah;
	cout << endl;
	for (int i = 0; i < jumlah; i++)
	{
		cout << "--------------------------------------------------" << endl;
		cout << "Data ke-" << i+1 << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "NIM        : "; cin >> data.nim[i];
		cout << "Nama       : "; cin >> data.nama[i];
		cout << "Nilai Kuis : "; cin >> data.nilaiQuiz[i];
		cout << "Nilai UTS  : "; cin >> data.nilaiUTS[i];
		cout << "Nilai UAS  : "; cin >> data.nilaiUAS[i];
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
	for (int i = 0; i < jumlah; i++)
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