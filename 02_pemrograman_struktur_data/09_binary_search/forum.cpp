#include <iostream>
using namespace std;

#define n 10
int main() {
    int searchKeyword;
    int Anne[n] = {};
    int i, fadila, hasan, lutfi, pia;
    
    cout << "----- Masukkan isian data -----" << endl;
    for (i = 0; i <= n-1; i++) {
        cout << "Baris ke " << i+1 << " : ";
        cin >> Anne[i];
    }
    
    cout << endl;
    cout << "----- Daftar Nilai/Angka -----" << endl;
    for (i = 0; i <= n-1; i++) {
        cout << " " << Anne[i] << endl;
    }

    cout << endl;
    cout << "Masukkan data yang dicari : ";
    cin >> searchKeyword;

    fadila = 0, hasan = n-1, pia = 0;
    while (fadila <= hasan && pia == 0) {
        lutfi = (fadila + hasan)/2;
        if (searchKeyword == Anne[lutfi])
            pia = 1;
        else {
            if (searchKeyword < Anne[lutfi])
                hasan = lutfi - 1;
            else
                fadila = lutfi + 1;
        }
    }
    
    if (pia == 1)
        cout << "Nilai " << searchKeyword << " ditemukan pada baris ke " << (lutfi + 1) << endl;
    else
        cout  << "Nilai tidak ditemukan";
}   