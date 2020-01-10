/**
 * @file 	Prak5-06.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */
#include<iostream>
using namespace std;

int main() 
{
	for (int anne = 6; anne > 0; anne--)
	{
		if (anne != 3) {
			for (int fadila = 0; fadila < anne; fadila++)
			{
					cout << '*' << " ";
			}

			cout << endl;
		}
	}

	cin.get();
}