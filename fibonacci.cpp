/*aplikasi rekursif pada fibonacci*/
#include <iostream.h>

long fibo (long a)
{
    if(a==1 || a==2)
    return 1;
    else
    return fibo(a-1) + fibo(a-2);
}
int main()
{
    int x;
    cout <<"Mencari Nilai Fibonacci\n";
    cout <<"Masukkan nilai n=";
    cin >>x;
    cout <<"Fibonacci "<<x<<"="<<fibo(x)<<endl;
}
