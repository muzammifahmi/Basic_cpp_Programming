#include <iostream.h>
#include <conio.h>

int main(){
	int pilihan;
	do{
		cout <<"MENU PILIHAN :\n";
		cout <<"1. Baca Data\n";
		cout <<"2. Ubah data\n";
		cout <<"3. Hapus data\n";
		cout <<"4. Exit\n";
		cout <<"Pilihan anda (1/2/3/4): ";
		cin >>pilihan;
		
		if(pilihan==1){
			cout <<"Anda memilih menu 1\n";
			cout <<"Tekan ENTER untuk kembali ke menu utama\n"<<endl;
			getch();
		}else if(pilihan==2){
			cout <<"Anda memilih menu 2\n";
			cout <<"tekan ENTER untuk kembali ke menu utama\n"<<endl;
			getch();
		}else if(pilihan==3){
			cout <<"Anda memilih menu 3\n";
			cout <<"tekan ENTER untuk kembali ke menu utama\n"<<endl;
			getch();
		}else if(pilihan==4){
			system("exit");
		}
	}while(pilihan!=4);
}
