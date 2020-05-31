#include <iostream>
#include <string.h>

using namespace std;

#define MAX 100
#define true 1
#define false 0

struct BiodataAnne {
	char nama[500];
	int usia;
};

struct BiodataAnne mhs;
struct BiodataAnne queue[MAX];
void init(void);
int full(void);
int empty(void);
struct BiodataAnne entridata(void);
void enqueue(struct BiodataAnne mhs);
struct BiodataAnne dequeue(void);
void display(struct BiodataAnne mhs);
void baca(void);
int awal, akhir;
char nocomoent[10];

int main() {
	char pilih;
	cout << "== Program Entri Data Mahasiswa ==\n";
	init();

	do {
		cout << "Menu pilihan :\n";
		cout << "1. Input Data\n";
		cout << "2. Hapus Data\n";
		cout << "3. Lihat Daftar Mahasiswa\n";
		cout << "4. Hapus semua data\n";
		cout << "5. Selesai\n";
		cout << "Pilih 1 sd 5: ";
		cin >> pilih;
		switch (pilih)
		{
			case '1': mhs = entridata(); enqueue(mhs); break;
			case '2': cout << "\nData yang dihapus: \n";
				mhs =dequeue(); display(mhs); break;
			case '3': baca(); break;
			case '4': init(); cout << "\n Data telah diskosongkan\n"; break;
			case '5': break;

			default:
			cout << "Pilih 1 sd 5!";
				break;
		}
		cout << "\n";
	}
	while (pilih != 5); {	
		return 0;
	}
}

void init (void) {
	awal = -1;
	akhir = -1;
}

void enqueue (struct BiodataAnne mhs) {
	if(empty() == true) {
		awal = 0;
		akhir = 0;
		queue[awal] = mhs;
	} else if (full() != true) {
		akhir++;
		queue[akhir] = mhs;
	} else cout << "Queue sudah penuh ... \n";
}

struct BiodataAnne dequeue(void) {
	int i;

	if(empty() != true) {
		mhs = queue[awal];
		for(i=awal; i<=akhir; i++) {
			queue[i] = queue[i+1];
			akhir--;
		}
		return(mhs);
	} else return(queue[awal]);
}

int full(void) {
	if (akhir == MAX-1) return(true);
	else return(false);
}
int empty(void) {
	if(akhir == -1) return true;
	else return(false);
}
void baca(void) {
	int i;
	cout << "\n Isi queue: \n";

	if (empty() != true)
	{
		for (i = awal; i <= akhir; i++)
		{
			display(queue[i]);
		}
	} else cout << "Data Kosong.";
	cout << "\n";
}
struct BiodataAnne entridata(void) {
	struct BiodataAnne mhs;
	cout << "\n";
	cout << "Nama : "; cin>> mhs.nama;
	cout << "Usia : "; cin>> mhs.usia;
	return(mhs);
}
void display(struct BiodataAnne mhs) {
	cout << "\n";
	cout << "Nama: " << mhs.nama << "\n";
	cout << "Usia: " << mhs.usia << "\n";
}