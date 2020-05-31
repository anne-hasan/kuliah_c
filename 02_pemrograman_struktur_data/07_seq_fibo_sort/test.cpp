#include <string.h>

int Bunga[10] = {9, 3, 7, 2, 5, 8, 1, 10, 6, 4};
int X = 10;

void tukar(int a, int b) {

int Y;

Y = Bunga[b];

Bunga[b] = Bunga[a];

Bunga[a] = Y;   }

void tampil() {
for (int i = 0; i < X; i++) {
cout << Bunga[i] << " ";  }

cout << endl;  }

void UrutB() {

     for (int j = X - 1; j >= i; j--) {

         if (Bunga[j] < Bunga[j - 1]) tukar(j, j-1);  }

            tampil(); }

                                    cout << endl;  }

int main()  {

cout << "*-------------------------------*" << endl;

cout << "* Selamat datang di aplikasi    *" << endl;

cout << "*-------------------------------*" << endl;

cout << "Nilai awal: "; 

tampil();

cout << "---------------------------------" << endl;

cout << "Proses ..." << endl;

UrutB();

cout << "---------------------------------" << endl;

cout << "TERIMA KASIH" << endl;

cout << "---------------------------------" << endl;

cin.get();  }