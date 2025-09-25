#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int bil;
	
    cout<<"Masukkan 2 digit terakhir NIM anda: ";
    cin>>bil;
	if (bil %2==0){
		cout<<"\n Digit NIM anda adalah bilangan genap"<<endl;
	}else{
		cout<<"\n Digit NIM anda adalah bilangan ganjil"<<endl;
	}
	getch();
}
