#include <iostream>
#include <conio.h>
using namespace std; 
int main ()
{
int penjualan;
int pajak;
int laba;

cout << "Masukkan penjualan hari ini: "; 
cin >> penjualan; 

if (penjualan >=0 && penjualan <=200000)
{   pajak = 10000;
	laba = penjualan * 10/100;} 
	else 
	{ 
	if (penjualan <= 500000)
	{
		pajak = 20000;
		laba = penjualan * 15/100;} 
	else 
	{
		if (penjualan > 500000)
		pajak = 30000; 
	 	laba = penjualan * 20/100; 
	}
	} 
	cout << "Penjualan hari ini Rp. " << penjualan << endl; 
	cout << "Uang Pajak = Rp. " << pajak << endl; 
	cout << "Laba = Rp. " << laba << endl; 
	cout << "Hasil Total = Rp. " << laba - pajak <<endl; 
	getch ();


}
