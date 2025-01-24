#include <iostream.h>
#include <conio.h>

int main()
{
    void *tunjuk;
    double n_double = 25.5;
    char n_char[99] = "D";
    tunjuk = &n_double;
    cout <<"nilai yang ditunjuk adalah : "<<*(double *)tunjuk<<endl;

    tunjuk = n_char;
    cout <<"nilai yang ditunjuk adalah : "<<*(char *)tunjuk<<endl;
}
