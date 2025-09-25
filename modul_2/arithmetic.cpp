#include <conio.h>
#include <iostream>
using namespace std;
int main(){
	double a, b, c=0, d=0, e=0, f=0; //Deklarasi
	cout<<"Masukkan Nilai A : ";
	cin>>a;
	cout<<"Masukkan Nilai B : ";
	cin>>b;
	c = a * b;
	d = a / b;
	e = a + b;
	f = a - b;
	cout<<"Hasil C = A * B : "<<c<<endl;
	cout<<"Hasil C = A / B : "<<d<<endl;
	cout<<"Hasil C = A + B : "<<e<<endl;
	cout<<"Hasil C = A - B : "<<f<<endl;
	getch();
}
