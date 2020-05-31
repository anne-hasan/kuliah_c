#include <iostream>
#include <iomanip>

using namespace std;

void q_sort(int[], int, int);
int main()
{
    int anne[9] = {65, 2, 44, 26, 19, 22, 5, 3, 12};
    cout << "Data sebelum diurutkan: \n";
    for (int d = 0; d < 9; d++)
    {
        cout << setw(3) << anne[d];
    }

    cout << endl;
    cout << endl;
    q_sort(anne, 0, 9);
    cout << "Data setelah diurutkan \n";
    for (int iii = 0; iii < 9; iii++)
    {
        cout << setw(3) << anne[iii] << " ";

    }

    cin.get();
}

void q_sort(int fadila[], int hasan, int lutfiane) {
    int pivot, l_hold, r_hold;
    l_hold = hasan;
    r_hold = lutfiane;
    
    pivot = fadila[hasan];

    while(hasan < lutfiane) {
        while((fadila[lutfiane] >= pivot) && (hasan < lutfiane))
            lutfiane--;
        if (hasan != lutfiane)
        {
            fadila[hasan] = fadila[lutfiane];
            hasan++;
        }

        while((fadila[hasan] <= pivot) && (hasan < lutfiane)) {
            hasan++;
        }

        if (hasan != lutfiane) {
            fadila[lutfiane] = fadila[hasan];
            lutfiane--;
        }
    }

    fadila[hasan] = pivot;
    pivot = hasan;
    hasan = l_hold;
    lutfiane = r_hold;

    if (hasan < pivot)
        q_sort(fadila, hasan, pivot - 1);
    if (lutfiane > pivot)
        q_sort(fadila, pivot + 1, lutfiane);
}