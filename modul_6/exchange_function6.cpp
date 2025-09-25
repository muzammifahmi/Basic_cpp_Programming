#include <iostream.h>
#include <conio.h>

int main()
{
    void *p_void;

    float var_f = 3.9;
    p_void = &var_f;

    cout <<"nilai variabel ="<<var_f<<endl;

    *(float *)p_void = 7.8;

    cout <<"nilai ubah variabel  ="<<var_f;
}
