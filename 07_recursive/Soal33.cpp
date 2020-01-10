/**
 * @file    Soal33.cpp
 * @author  Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Buat deret 2, 4, 7, 11, 16, 22, 29, 37
 */

#include <iostream>
using namespace std;
int main()
{
    int t1, t2, nextTerm = 0;
    
    cout << "Masukkan nilai awal setelah 0: ";
    cin >> t1;
    cout << endl;

    cout << "Step 1: " << t1 << endl;

    t2 = t1;
    
    cout << "Step 2: " << t2 << endl;
    for (int i = 0; i < 6; i++)
    {
        nextTerm = t2 + t1;
        cout << "Step " << i + 2 << ": " << t2 << " + " << t1 << " = " << nextTerm << endl;

        t1 = t2;
        t2 = nextTerm;
    }

    cin.get();
}