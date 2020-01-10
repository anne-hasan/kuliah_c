/**
 * @file 	P10-02.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 */
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void _strlen() {
	char text[100];
	cout << "Masukkan kata atau kalimat : ";
	gets(text);

	// cout << "Panjang : " << strlen(text) << endl;
}

void _strcat() {

}

void _strcmp() {

}

void _strlwr() {

}

void _strupr() {

}

void _strchr() {

}

void _strstr() {

}

void _strrev() {

}

void _atoi() {

}

void _atof() {

}


int main() 
{
	int menu;
	cout << "-------------- List Function --------------" << endl;
	cout << "1  - strlen()" << endl
		 << "2  - strcat()" << endl
		 << "3  - strcmp()" << endl
		 << "4  - strlwr()" << endl
		 << "5  - strupr()" << endl
		 << "6  - strchr()" << endl
		 << "7  - strstr()" << endl
		 << "8  - strrev()" << endl
		 << "9  - atoi()" << endl
		 << "10 - atof()" << endl << endl
		 << "Pilih menu : ";

	cin >> menu;
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;
	switch(menu) {
		case 1:
			_strlen();
			break;
		case 2: 
			_strcat();
			break;
		case 3: 
			_strcmp();
			break;
		case 4: 
			_strlwr();
			break;
		case 5: 
			_strupr();
			break;
		case 6: 
			_strchr();
			break;
		case 7: 
			_strstr();
			break;
		case 8: 
			_strrev();
			break;
		case 9: 
			_atoi();
			break;
		case 10: 
			_atof();
			break;
		default:
			cout << "Menu tidak tersedia!";
			break;
	}

	cin.get();
}