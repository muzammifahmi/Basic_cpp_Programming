#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double titikcelcius, titikreamur, titikkelvin, titikfarenheit,
		hasilbagi1, hasilkali2;
	
	cout <<"KONVERSI SUHU CELCIUS"<<endl;
	cout <<"====================="<<endl;
	cout <<"Masukkan suhu dalam celcius : ";
	cin >>titikcelcius;
	cout <<endl;
	
	
	titikkelvin = titikcelcius + 273.0;
	//rumus konversi celcius ke reamur (1)
	hasilbagi1 = titikcelcius / 5.0;
	titikreamur = 4.0 * hasilbagi1;
	//rumus konversi celcius ke farenheit (2)
	hasilkali2 = 9.0 * hasilbagi1;
	titikfarenheit = hasilkali2 + 32.0;
	
	
	if (fmod(titikcelcius, 5.0) == 0){
		cout <<"Konversi Celcius ke Reamur"<<endl;
		cout <<"Tr = 4 / 5 * Tc"<<endl;
		cout <<"Tr = 4 / 5 * "<<titikcelcius<<endl;
		cout <<"kita bisa membagi Tc = "<<titikcelcius<<" dengan angka 5"<<endl;
		cout <<"Tr = 4 * "<<hasilbagi1<<endl;
		cout <<"Tr = "<<titikreamur<<endl;
		cout <<"Konversi Celcius ke Farenheit"<<endl;
		cout <<"Tf = 9 / 5 * Tc + 32"<<endl;
		cout <<"Tf = 9 / 5 * "<<titikcelcius<<" + 32"<<endl;
		cout <<"kita bisa membagi Tc = "<<titikcelcius<<" dengan angka 5"<<endl;
		cout <<"Tf = 9 * "<<hasilbagi1<<" + 32"<<endl;
		cout <<"Tf = "<<hasilkali2<<" + 32"<<endl;
		cout <<"Tf = "<<titikfarenheit<<endl;	
		
	}else{
		cout <<"salah";	
	} 
	
	//cout <<"Konversi celcius dari " <<titikcelcius<<" adalah "<<titikreamur<<endl;
	//cout <<"Konversi celcius dari " <<titikcelcius<<" adalah "<<titikkelvin<<endl;
	//cout <<"Konversi celcius dari " <<titikcelcius<<" adalah "<<titikfarenheit<<endl;
	return 0;
}
