#include <iostream>
#include <string>
using namespace std;

// Class
struct Anne {
	string nama, alamat, pekerjaan, masa_berlaku, nomor_sim;
	int tahun_lahir, tinggi;
};

Anne sim;

int main() {
	sim.nama         = "Anne Hasan";
	sim.alamat       = "Jl Cempaka";
	sim.pekerjaan    = "Tukang Ketik";
	sim.masa_berlaku = "5 Tahun";
	sim.tahun_lahir  = 1999;
	sim.tinggi       = 160;
	sim.nomor_sim    = "12345678";

	cout << "==================================================" << endl;
	cout << "                      Data SIM                    " << endl;
	cout << "==================================================" << endl;
	cout << "Nama           : " << sim.nama << endl;
	cout << "Alamat         : " << sim.alamat << endl;
	cout << "Pekerjaan      : " << sim.pekerjaan << endl;
	cout << "Masa berlaku   : " << sim.masa_berlaku << endl;
	cout << "Tahun lahir    : " << sim.tahun_lahir << endl;
	cout << "Tinggi (CM)    : " << sim.tinggi << endl;
	cout << "Nomor SIM      : " << sim.nomor_sim << endl;
	cin.get();
}