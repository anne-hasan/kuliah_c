#include<string.h>
#include<iostream>
using namespace std;
#define MAXSIZE 30

void fibonacci(int *f)
{
	f[0] = 1;
	f[1] =1;
	for(int i = 2; i <MAXSIZE; ++i)
		f[i] = f[i - 2] + f[i - 1];
}

int fibonacci_search(int *a,int key,int n)
{
	int Rendah = 0, Tinggi = n - 1;
	int mid    = 0;
	int k      = 0;
	int F[MAXSIZE];
	fibonacci(F);
	
	while(n > F[k] - 1)
		++k;

	for(int i = n; i <F[k] - 1; ++i)
		a[i] = a[Tinggi];

	while(Rendah <= Tinggi){
		mid = Rendah + F[k-1] - 1;
		if (a[mid] > key)
		{
			Tinggi = mid - 1;
			k = k - 1;
		} else if(a[mid] < key) {
			Rendah = mid + 1;
			k = k - 2;
		} else {
			if(mid <= Tinggi)
				return mid;
			else
				return -1;
		}
	}

	return -1;
}

int main()
{
	
	int a[MAXSIZE] = {1,4,6,8,9,11,23,35,47,51,55,63,64,78,88,95,99};
	int k;
	cout << "Masukkan Angka Yang Akan Dicari: "; cin>>k;
	int pos = fibonacci_search(a,k,17);
	if (pos !=-1)
		cout<< "Data Ditemukan Pada Posisi : "<< pos + 1 << " Isi Elemennya = " << k << endl;
	else
		cout << "Data Tidak Ditemukan " << endl;

	cin.get();
	return 0;
}