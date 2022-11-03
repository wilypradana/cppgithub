#include <iostream>
using namespace std;
int main(){
	
	float a,b,hasil;
	char aritmatika;
	
	cout << "====kalkulator ku===="<<endl;
//	input user
 	
 	cout << "masukan angka pertama: ";
 	cin >> a;
 	cout << "pilih operator +,-,x,: : ";
 	cin >> aritmatika;
 	cout << "masukan angka kedua: ";
 	cin >> b;
 	
 	cout << "hasil perhitungan ";
 	cout << a << aritmatika << b;
 	
 	switch(aritmatika){
 		case '+':
 			hasil = a + b;
 			break;
 					case '-':
 			hasil = a - b;
 			break;
 					case 'x':
 			hasil = a * b;
 			break;
 					case ':':
 			hasil = a / b;
 			break;
	 }
 	
 	
 	
 	
 	
 	cout << " = "<<hasil<<endl;
 	
 	
 	
 	
 	
 	
	
	
	
	
	
}
