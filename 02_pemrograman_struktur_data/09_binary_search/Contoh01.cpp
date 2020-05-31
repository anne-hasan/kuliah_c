#include <iostream>
using namespace std;

#define n 10
int main() {
    int N;
    int A[n] = {4, 7, 10, 11, 16, 22, 24, 28, 63, 66};
    int i, Lo, Hi, Mid, Flag;
    
    cout << "Daftar Nilai/Angka" << endl;
    for (i = 0; i <= n-1; i++) {
        cout << " " << A[i] << endl;
    }

    cout << "Masukkan data yang dicari : ";
    cin >> N;

    Lo = 0, Hi = n-1, Flag = 0;
    while (Lo <= Hi && Flag == 0) {
        Mid = (Lo + Hi)/2;
        if (N == A[Mid])
            Flag = 1;
        else {
            if (N < A[Mid])
                Hi = Mid - 1;
            else
                Lo = Mid + 1;
        }
    }

    if (Flag == 1)
        cout << "Nilai " << N << " ditemukan pada baris ke " << (Mid + 1) << endl;
    else
        cout  << "Nilai tidak ditemukan";
}   