#include<iostream>
using namespace std;

int Search(int A[], int, int);

int main()
{
    const int totalArray = 11;
    int anne[totalArray] = {22,61,15,66,18,25,34,87,55,45,10};

    cout << "***************************************" << endl;
    cout << "** S E Q U E N T I A L   S E A R C H **" << endl;
    cout << "***************************************" << endl;

    // gotoxy(1,5);
    cout << "Isi datanya adalah " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    for (int i = 0; i < totalArray; i++)
    {
        cout << "\t" << "Data [" << i << "]" << "--> " << anne[i] << endl;
    }

    int dila = 0;
    int fadila = 0;

    cout << "********************************************" << endl;
    cout << endl;
    cout << "Masukkan data yang akan Anda cari? "; cin >> dila;

    fadila = Search(anne, totalArray, dila);

    if (fadila != -1)
        cout << "Data yang dicari ditemukan pada posisi: Data[" << fadila <<"]" << endl;
    else
        cout << "Data yang Anda cari tidak ditemukan" << endl;

    cin.get();

    return 0;
}

int Search(int anne[], int totalArray, int Element)
{
    int fadila = -1;

    for (int i = 0; i < totalArray; i++)
    {
        if (Element == anne[i])
        {
            fadila = i;
            break;
        }
    }

    return fadila;
}