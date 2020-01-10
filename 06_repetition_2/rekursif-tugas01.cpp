/**
 * @file    rekursif-tugas01.cpp
 * @author  Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Menampilkan deret: 2, 4, 7, 11, 16, 22, 29, 37
 */

#include <iostream>
using namespace std;
int main()
{
    int t1 = 2, t2 = 4, nextTerm = 0;
    
    cout << "Deret: " << t1 << ", " << t2 << ", ";
    for (int i = 0; i < 6; i++)
    {
        nextTerm = t2 + (t2 - t1 + 1);

        if (nextTerm >= 37) {
            cout << nextTerm;
        } else {
            cout << nextTerm << ", ";
        }

        t1 = t2;
        t2 = nextTerm;
    }
    
    cin.get();
}