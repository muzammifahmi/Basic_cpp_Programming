#include <iostream.h>

using namespace std;
int main ()
{
	
	int index1, nilai[10];
	cout << "Masukkan nilai mahasiswa: \n";
	for (index1=0;index1<10;index1++)
	{
		cout << "Mahasiswa" << index1+1 << " : ";
		cin >> nilai[index1];
	}
	cout << "Nilai mahasiswa yang telah dimasukkan: \n";
	for (index1=0;index1<10;index1++)
	{
		cout << " " << nilai[index1];
	}
	return 0;
}


