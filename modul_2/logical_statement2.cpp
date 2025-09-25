#include <iostream>
using namespace std;

int main(){
	int a, b, c; //Deklarasi variabel
	cout<<"Masukkan nilai A = "; //Keluarkan string masukan nilai
	cin>>a; //masukan data integer dari keyboard
	/*Proses*/
	b=(a+12<8);
	c=!(b);
	cout<<"Program ekspresi NOT"<<endl;
	cout<<"Masukan Nilai = "<<a<<endl;
	cout<<"Nilai b = (a+12<8) = "<<b<<endl;
	cout<<"Nilai c = !(b) = "<<c<<endl;
}
