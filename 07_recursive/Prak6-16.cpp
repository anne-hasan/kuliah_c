/**
 * @file    Prak6-16.cpp
 * @author  Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Menampilkan Deret Fibonacci step by step menggunakan inputan
 */

#include <iostream>
using namespace std;
int main()
{
    int t1 = 0, t2, nextTerm = 0;
    
    cout << "Masukkan nilai awal setelah 0: ";
    cin >> t2;
    cout << endl;

    cout << "Step 1: " << 0 << endl;
    for (int i = 0; i < 7; i++)
    {
        nextTerm = t2 + t1;
        cout << "Step " << i + 2 << ": " << t2 << " + " << t1 << " = " << nextTerm << endl;

        t1 = t2;
        t2 = nextTerm;
    }

    cin.get();
}