//Displays Arithmetic and Logic Results
#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, j, k, l, m, n;
    cout<<"Masukkan nilai a : ";
    cin>>a;
    cout<<"Masukkan niali b : ";
    cin>>b;
    cout<<"Masukkan nilai c : ";
    cin>>c;
	cout <<endl;
	
    d = (a*b)-c/(b*a);
    e = d<<2;
    cout<<"Nilai dari d = (a*b)-c/(b*a)  = "<<d<<endl;
    cout<<"Nilai dari geser 2 bit kekiri = "<<e<<endl<<endl;
    
    cout<<"Masukkan nilai j = ";
    cin>>j;
    cout<<"Masukkan nilai k = ";
    cin>>k;
    cout<<"Masukkan nilai l = ";
    cin>>l;
	
    m = j*(k+l);
    n = m>>3;
    cout<<"Nilai dari  m = j*(k+l)        = "<<m<<endl;
    cout<<"Hasil dari geser 3 Bit kekanan = "<<n<<endl<<endl;

    if(e==n)cout<<e<<" sama dengan "<<n<<endl;
    else if(e/=n)cout<<e<<" tidak sama dengan "<<n<<endl;
    if(e>n)cout<<e<<" Lebih besar dari "<<n<<endl;
    else if(e<n)cout<<e<<" Lebih kecil dari "<<n<<endl;
}
