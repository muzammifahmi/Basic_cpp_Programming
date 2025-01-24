//header file yang melibatkan cout
#include <iostream>
using namespace std;
//deklarasi fungsi utama
int main()
{
    //deklarasi pointer *pBil
    int *pBil;
    //deklarasi variabel bilX=77
    int bilX=77;
    //pBil menunjuk pada bilX
    pBil=&bilX;
    //output nilai awal
    cout <<"isi bilX = "<<bilX<<endl;
    cout <<"nilai yang ditunjuk pBil = "<<*pBil<<endl;
    //pointer *pBil menunjuk *pBil + 3
    *pBil = *pBil + 3;
    //output nilai sekarang 
    cout <<"isi bilX sekarang = "<<bilX<<endl;
    cout <<"nilai yang ditunjuk pBil = "<<*pBil<<endl;
    return  0;
}
