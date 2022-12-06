#include <iostream>
using namespace std; 
int main (){

int x,y,z, lebih_besar; 
cout << "Input nilai x, y , z: "; 
cin >> x >> y >> z; 
lebih_besar = x;

if (y > lebih_besar)
lebih_besar = y; 

if ( z > lebih_besar)
lebih_besar = z; 




cout << "Nilai yang lebih besar antara x,y dan z adalah: " <<lebih_besar<<endl; 
return 0; 
}
