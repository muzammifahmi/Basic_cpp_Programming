#include <iostream>
using namespace std;

int main(){
    int x;	
    cout <<"Masukkan sebuah angka: ";
    cin >>x;
    if (x >= 10)
    {
        if (x <=20)
        cout<<"nilai "<<x<<" ada diantara 10 dan 20";
        else 
        cout<<"nilai "<<x<<" lebih dari 20 ";
    }
    else
    {
        cout<<"nilai "<<x<<" kurang dari 10 ";
    }
    return 0;
}
