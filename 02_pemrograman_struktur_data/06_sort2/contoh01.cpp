#include <iostream>
using namespace std;
int a[50];
void merge(int, int, int);
void merge_sort(int anne, int hasan) 
{
    int fadila;
    if (anne < hasan) 
    {
        fadila = (anne + hasan)/2;
        merge_sort(anne, fadila);
        merge_sort(fadila + 1, hasan);
        merge(anne, fadila, hasan);
    }
}

void merge(int anne, int fadila, int hasan) 
{
    int h, i, j, b[50], k;
    h = anne;
    i = anne;
    j = fadila + 1;

    while((h <= fadila) && (j <= hasan)) 
    {
        if (a[h] <= a[j]) 
        {
            b[i] = a[h];
            h++;
        }
        else 
        {
            b[i] = a[j];
            j++;
        }

        i++;
    }

    if (h > fadila) 
    {
        for (k = j; k <= hasan; k++)
        {
            b[i] = a[k];
            i++;
        }
    } 
    else 
    {
        for (k = h; k <= fadila; k++)
        {
            b[i] = a[k];
            i++;
        }
    }

    for (k = anne; k <= hasan; k++)
    {
        a[k] = b[k];
    }
}

int main()
{
    int num, i;
    cout << "------------------------------ \n";
    cout << "       MERGE SORT PROGRAM      \n";
    cout << "------------------------------ \n \n";
    cout << "Masukkan banyak bilangan: ";
    cin >> num;
    cout << "\n";
    cout << "Sekarang masukkan " << num << " Bilangan yang ingin diurutkan : " << endl;
    for (i = 1; i <= num; i++)
    {
        cout << "Bilangan ke-" << i << " : ";
        cin >> a[i];
    }

    merge_sort(1, num);
    cout << "\n";
    cout << "Hasil akhir pengurutan : \n";
    for (i = 1; i <= num; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n";
    cin.get();
}