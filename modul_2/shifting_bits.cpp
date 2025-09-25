#include <iostream>
using namespace std;

int main (){
    int x, y;
    std::cout<<"masukkan nilai X = ";
    cin>>x;
    std::cout<<"masukkan nilai y = ";
    cin>>y;
    x=x<<3; //geser ke kiri 3 bit
    y=y>>2; //geser ke kanan 2 bit
    cout<<"hasil dari geser 3 bit ke kiri  = "<<x<<endl;
    cout<<"hasil dari geser 2 bit ke kanan = "<<y<<endl;
}
