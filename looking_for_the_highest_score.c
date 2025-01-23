//fungsi
#include <stdio.h>
//deklarasi fungsi
int cari(int n1, int n2);
void prin(int m);

//main function
main()
{
    int i=5;
    int j=7;
    int k;
    k=cari(i, j);
    prin(k);
    return 0;
}
//<--function definition here
int cari(int a, int b)
{
    if(a>b) return a;
    else return b;
}
void prin (int m)
{
    printf("Bilangan terbesar adalah : %d\n");
}
//<- end function
