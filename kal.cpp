#include <iostream>
#include <math.h>
using namespace std; 
int main(){
	int angka1,angka2,angka3, pilihan;
	float hasil1, hasil2,hasil3,hasil4;
	string operasi; 
	
do{


	cout <<"Pilih jenis operator" << endl; 
	cout << "1. +" << endl;
	cout << "2. -"<< endl; 
	cout << "3. *"<< endl; 
	cout << "4. /"<< endl; 
	cin >> pilihan; 
	cout << " Enter tiga angka yang akan dihitung: ";
	cin >> angka1 >> angka2 >> angka3; 
	
	switch (pilihan)
	{
	
		case 1:
			
			hasil1 = angka1+angka2+angka3;
			operasi = '+';
			cout << angka1 << operasi << angka2 << operasi << angka3 << "= " <<  hasil1;
		break;
		
		case 2:
			
			hasil2 = angka1-angka2-angka3;
			operasi = '-';
			cout <<  angka1 << operasi << angka2 << operasi << angka3  << "= " <<  hasil2 <<"\n";
		break;
		
		case 3 :
			
			hasil3 = angka1 * angka2 * angka3;
			operasi = '*';
			cout << angka1 << operasi << angka2 << operasi << angka3 << "= "  << hasil3 <<"\n";
		break;
		
		case 4 : 
		
			hasil4 = angka1 / angka2 / angka3;
			operasi = '/';
			cout << angka1 << operasi << angka2 << operasi << angka3 << "= " << hasil4 <<"\n";
			
	default:
			cout << "Pilihan salah\n";
		break;
		
	} 
} while (pilihan!=5);

return 0;
					
}
	



		
