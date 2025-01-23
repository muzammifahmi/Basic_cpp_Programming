#include <iostream.h>

//deklarasi fungsi
int calcSalesTax(float purchase, float taxRate= 0.1);

//main function
main()
{
    float purchase;
    cout <<"Masukkan pembelian:";
    cin >> purchase;

    float tax=calcSalesTax(purchase);
    cout <<"Pajak pembelian adalah : "<<tax<<endl;
    return 0;
}
int calcSalesTax(float purchase, float taxRate)
{
    return purchase * taxRate;
}
