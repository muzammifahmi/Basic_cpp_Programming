#include <conio.h>
#include <iostream>
using namespace std;
int main(){
    int m=15, n=7;
    if(m>n)cout<<m<<" Lebih Besar Dari "<<n<<endl;
    else if (m<n)cout<<m<<" Lebih Kecil Dari "<<n<<endl;
    if(m==n)cout<<m<<" Sama Dengan "<<n<<endl;
    else if(m/=n)cout<<m<<" Tidak Sama Dengan "<<n<<endl;
    getch();
}
