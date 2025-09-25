#include <iostream>

using namespace std;

int main(){
    double a, b, c;
    bool x, y;
    cout <<"Masukkan nilai x = ";
    cin >> x;
    cout <<"Masukkan nilai y = ";
    cin >> y;

    a = x & y;
    b = x || y;
    c = x ^ y;

    cout <<"Hasil dari "<< x <<" & "<< y <<" = "<< a << endl;
    cout <<"Hasil dari "<< x <<" || "<< y <<" = "<< b << endl;
    cout <<"Hasil dari "<< x <<" ^ "<< y <<" = "<< c << endl;

    return 0;
}