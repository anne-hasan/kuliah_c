/**
 * @file    Prak6-05.cpp
 * @author  Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Menampilkan Bilangan Prima tanpa menggunakan inputan
 */
#include <iostream>
using namespace std;
int main() {

    int a, b, cek_modulo;
    for (a = 2; a <= 20; a++) {
        cek_modulo = 0;
        for (b = 2; b < a; b++) {
            if (a % b == 0) {
                cek_modulo = 1;
            }
        }

        if (cek_modulo == 0) {
            cout << a << " ";
        }
    }

    cin.get();
}