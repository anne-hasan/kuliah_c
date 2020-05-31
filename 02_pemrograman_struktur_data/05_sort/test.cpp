#include <string.h>
#include <iostream>
using namespace std;

int anne[10] = {9, 3, 7, 2, 5, 8, 1, 10, 6, 4};
int hasan = 10;
void tukar(int a, int b) {
    int fadila;
    fadila = anne[b];
    anne[b] = anne[a];
    anne[a] = fadila;
}

void tampil()
{
    for (int i = 0; i < hasan; i++)
    {
        cout << anne[i] << " ";
    }
    
    cout << endl;
}

void bubble_sort()
{
    for (int i = 1; i < hasan; i++)
    {
        for (int j = hasan - 1; j >= i; j--)
        {
            if (anne[j] < anne[j - 1]) tukar(j, j-1);
        }

        tampil();
    }

    cout << endl;
}

int main()
{
    cout << "*-------------------------------*" << endl;
    cout << "*   Selamat datang di aplikasi  *" << endl;
    cout << "*          Bubble Sort          *" << endl;
    cout << "*-------------------------------*" << endl;
    cout << "Nilai awal: ";
    tampil();
    cout << "---------------------------------" << endl;
    
    cout << "Proses bubble sort..." << endl;
    

    bubble_sort();

    cout << "---------------------------------" << endl;
    cout << "TERIMA KASIH" << endl;
    cout << "---------------------------------" << endl;
    cin.get();
}
