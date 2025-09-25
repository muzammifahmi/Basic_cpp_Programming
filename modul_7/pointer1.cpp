#include <iostream>
using namespace std;

int main(){
    int *pBil, bilX = 77;
    pBil = &bilX;
    
    cout << "alamat bilX = " << pBil << endl;
    cout << "alamat pBil yang diambil dari alamat bilX = " << &pBil << endl;
    cout << "Nilai dari alamat pBol = " << *pBil << endl;
    cout << "Nilai asli bilX = " << bilX << endl;

    *pBil = *pBil + 10;
    cout << "Nilai bilX setelah ditambah dengan 10 = " << bilX << endl;


}