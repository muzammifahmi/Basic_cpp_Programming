#include <iostream>
using namespace std;

int main()
{
    long *p, x;

    p = &x;
    x = 40;
    
    cout <<"nilai X = "<<x<<endl;
    cout <<"nilai *p = "<<*p<<endl;
    cout <<"nilai p = "<<p<<endl;
    cout <<"nilai X* = "<<&x<<endl<<endl;

    *p = 25;

    cout <<"nilai X = "<<x<<endl;
    cout <<"nilai *p = "<<*p<<endl;
    cout <<"nilai p = "<<p<<endl;
    cout <<"nilai *X = "<<&x<<endl<<endl;

    return 0;
}
