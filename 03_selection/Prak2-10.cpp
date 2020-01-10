/**
 * @file 	Prak2-10.cpp
 * @author	Lutfiane Fadila Hasan (4519215001)
 * Contact: lutfiane.fadila@gmail.com
 *
 * Karyawan di PT sejahtera dihitung perjam sebesar Rp,3500/jam. Jika jam kerja
 * lebih dari 48 jam maka dihitung lembur. Gaji jam untuk lembur adalah Rp,
 * 4000/jam Hitung jumlah yang harus di dapat jika dia bekerja selama seminggu
 */

#include<iostream>
using namespace std;

int main()
{
	int upahPerJam, upahLemburPerJam, totalJamKerja;
	double totalGaji;
	upahPerJam       = 3500;
	upahLemburPerJam = 4000;

	cout<<"==============================================="<<endl;
	cout<<"                  PT Sejahtera                 "<<endl;
	cout<<"==============================================="<<endl;

	cout<<"Masukkan total jam kerja selama seminggu : "; 
	cin >> totalJamKerja;

	if (totalJamKerja > (8 * 5)) {
		totalGaji  = (totalJamKerja - (totalJamKerja - (8 * 5))) * 3500 + (totalJamKerja - (8 * 5)) * 4000;
	} else {
		totalGaji = totalJamKerja * 3500;
	}

	cout<<"==============================================="<<endl;
	cout<<"Total Gaji : "<<totalGaji<<endl;
	
	cin.get();
}