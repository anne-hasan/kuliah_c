/**
 * @file 	Prak5-08.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Melakukan proses “c” pengulangan sebanyak 2 kali, “d” pengulangan
 * sebanyak 3 kali dan j pengulangan sebanyak 6 kali, 
 * dimana nilai awal n = 1 dan nilai n=n*4
 *
 */
#include<iostream>
using namespace std;

int main() 
{
	long double n = 1;
	for (int c = 0; c < 2; c++)
	{
		for (int d = 0; d < 3; d++)
		{
			for (int j = 0; j < 6; j++)
			{
				n = n * 4;
			}
		}
	}

	cout << n;

	cin.get();
}