#include<iostream>
#include<string.h>
using namespace std;

struct Anne 		//Deklarasi struktur simpul
{
	int data;
	Anne *LINK;
};

class LList
{
	private:
		Anne *FIRST, *LAST, *Q;
	public:
		LList();	//fungsi yang khusus untuk diakses oleh pihak diluar kelas
		int INSERTKIRI(int data);
		void CETAK1();
		void CETAK2();

};

int main()
{
	LList Xx;
	Xx.INSERTKIRI(22);
	Xx.INSERTKIRI(66);
	Xx.INSERTKIRI(28);
	Xx.INSERTKIRI(63);
	Xx.INSERTKIRI(10);
	Xx.CETAK1();
	cout<<endl;
	cout<<"~~~~~~~~~~~~"<<endl;
	cout<< "Nilai	: ";
	Xx.CETAK2();
	cin.get();
}

//Inisialisasi
LList :: LList()
{
	FIRST = NULL;	//Inisialisasi Linked List
}

//Menginsert simpul disebelah kiri
int LList :: INSERTKIRI(int dt)
{
	Anne *p;
	p = new Anne;
	p -> LINK = FIRST;
	p -> data = dt;
	FIRST = p;
	FIRST = p;
	return(1);
}

//Menampilkan data berupa string
void LList :: CETAK1()
{
		Anne *Q;
		Q=FIRST;
		while(Q != NULL)
		{
			cout<<"Nilai : " << Q -> data << endl;
			Q = Q -> LINK;
		}
}

//Menampilkan data berupa string
void LList :: CETAK2()
{
	Anne *Q;
	Q = FIRST;
	while(Q != NULL)
	{
		cout<< Q -> data << " " ;
		Q = Q -> LINK;
	}
}