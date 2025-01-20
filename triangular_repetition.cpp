#include <iostream.h>
#include <conio.h>

int main()
{
	int tinggi;
	
	cout <<"Masukkan tinggi segitiga : ";
	cin >>tinggi;
	
	cout <<endl;
	cout <<"Segitiga Siku siku dengan tinggi "<<tinggi<<endl;
	
	for(int a=1; a<=tinggi; a++) //perulangan untuk tinggi segitiga
	{
		for(int b=1; b<=a; b++) //perulangan untuk menampilkan *
		{
			cout <<"*";
		}
		cout <<endl;
	}
	getch();
}
