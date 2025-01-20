#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d, e, f;
	cout<<"Masukkan Nilai a : ";
	cin>>a;
	cout<<"Masukkan Nilai b : ";
	cin>>b;
	cout<<"Masukkan Nilai c : ";
	cin>>c;
	cout<<"Masukkan Nilai d : ";
	cin>>d;
	e = a + b * c / d - b;
	f = (a + b) * c / d * (a - b);
	
	cout <<"Rumus nilai e"<<endl;
	cout <<"e = a + b * c / d - b"<<endl;
	cout <<"Rumus nilai f"<<endl;
	cout <<"f = (a + b) * c / d * (a - b)"<<endl;
	cout<<"Nilai dari e : "<<e<<endl;
	cout<<"Nilai dari f : "<<f<<endl;
	return 0;
}
