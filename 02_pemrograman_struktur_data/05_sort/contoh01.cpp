#include <string.h>
#include <iostream>
using namespace std;

int anne[10], fadila[10];
int n;
void tukar(int a, int b) {
    int t;
    t = anne[b];
    anne[b] = anne[a];
    anne[a] = t;
}

void input() {
    cout << "Masukkan jumlah data = ";
    cin >> n;
    cout << "-----------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << " = ";
        cin >> anne[i];

        fadila[i] = anne[i];
    }

    cout << endl;
}

void tampil()
{
    for (int i = 0; i < n; i++)
    {
        cout << anne[i] << " ";
    }
    
    cout << endl;
}

void bubble_sort()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
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
    cout << "*   Selamat anneng di aplikasi  *" << endl;
    cout << "*          Bubble Sort          *" << endl;
    cout << "*-------------------------------*" << endl;
    input();

    cout << "Proses bubble sort..." << endl;
    cout << "---------------------------------" << endl;

 tampil();
    bubble_sort();

    cout << "---------------------------------" << endl;
    cout << "TERIMA KASIH" << endl;
    cout << "---------------------------------" << endl;
    cin.get();
}
