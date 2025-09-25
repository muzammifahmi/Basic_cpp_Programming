#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"masukkan sebuah bilangan bulat      :";
    cin>>x;
    cout<<"masukkan sebuah bilangan bulat lain :";
    cin>>y;

    if (x>0 && y>0){
        cout<<"kedua bilangan tersebut adalah bilangan positif";
    }
    else if (x>0 || y>0){
        cout<<"salah satu bilangan tersebut adalah bilangan positif ";
    }
    else {
        cout<<"kedua bilangan tersebut bukan bilangan positif";
    }
    return 0;
}
