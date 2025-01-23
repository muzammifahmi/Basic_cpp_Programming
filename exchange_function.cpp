#include <iostream.h>
void Rtukar (int*, int*);
void Vtukar (int, int);
main()
{
    int a,b;
    a=99; b=11;
    //call by reference 
    cout <<"Nilai sebelum pemanggilan fungsi"<<endl;
    cout <<"Nilai a= "<<a<<"Nilai b= "<<b<<endl;
    Rtukar(&a,&b);
    cout <<"Nilai setelah pemanggilan fungsi Rtukar: "<<endl;
    cout <<"Nilai a= "<<a<<"Nilai b="<<b<<endl<<endl<<endl;
    //kembalikan ke nilai semula
    a=99;
    b=11;
    //call by value
    cout <<"\nNilai sebelum pemanggilan fungsi : "<<endl;
    cout <<"Nilai a= "<<a<<"Nilai b= "<<b<<endl<<endl;
    Vtukar (a,b);
    cout <<"Nilai setelah pemanggilan fungsi Vtukar : "<<endl;
    cout <<"Nilai a= "<<a<<"Nilai b= "<<b<<endl;
    return 0;
}
void Rtukar (int *px, int *py)
{
    int temp;
    temp = *px;
    *px=*py;
    *py=temp;
    cout <<"Nilai pada fungsi dengan call by value : "<<endl;
    cout <<"Nilai px= "<<*px<<"Nilai py= "<<*py<<endl<<endl;
}
void Vtukar (int px, int py)
{
    int temp;
    temp = px;
    px=py;
    py=temp;
    cout <<"Nilai pada fungsi dengan call by value : "<<endl;
    cout <<"Nilai px= "<<px<<"Nilai py= "<<py<<endl<<endl;
}
