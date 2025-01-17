#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double titikcelcius, titikreamur,titikreamur2, titikkelvin, titikkelvin2,
		titikfarenheit, titikfarenheit2, hasilbagi1,hasilbagi2, hasilbagi3, hasilkali2, hasilkali3;
	
	cout <<"====================="<<endl;
	cout <<"KONVERSI SUHU CELCIUS"<<endl;
	cout <<"====================="<<endl;
	cout <<"Masukkan suhu dalam celcius : ";
	cin >>titikcelcius;
	cout <<endl;
	
	if (fmod(titikcelcius, 5.0) == 0){
		//rumus konversi celcius ke reamur
		hasilbagi1 = titikcelcius / 5.0;
		titikreamur = 4.0 * hasilbagi1;
		//rumus konversi celcius ke farenheit 
		hasilkali2 = 9.0 * hasilbagi1;
		titikfarenheit = hasilkali2 + 32.0;
		//rumus konversi celcius ke kelvin
		titikkelvin = titikcelcius + 273.0;
		
		//konversi reamur
		cout <<"Konversi Celcius ke Reamur"<<endl;
		cout <<"Tr = 4 / 5 * Tc"<<endl;
		cout <<"Tr = 4 / 5 * "<<titikcelcius<<endl;
		cout <<"kita bisa membagi Tc = "<<titikcelcius<<" dengan angka 5"<<endl;
		cout <<"Tr = 4 * "<<hasilbagi1<<endl;
		cout <<"Tr = "<<titikreamur<<"R"<<endl;
		//konversi farenheit
		cout <<"Konversi Celcius ke Farenheit"<<endl;
		cout <<"Tf = 9 / 5 * Tc + 32"<<endl;
		cout <<"Tf = 9 / 5 * "<<titikcelcius<<" + 32"<<endl;
		cout <<"kita bisa membagi Tc = "<<titikcelcius<<" dengan angka 5"<<endl;
		cout <<"Tf = 9 * "<<hasilbagi1<<" + 32"<<endl;
		cout <<"Tf = "<<hasilkali2<<" + 32"<<endl;
		cout <<"Tf = "<<titikfarenheit<<"F"<<endl;
		//konversi kelvin
		cout <<"Konversi Celcius ke Kelvin"<<endl;
		cout <<"Tk = Tc + 273"<<endl;
		cout <<"Tk = "<<titikcelcius<<" + 273"<<endl;
		cout <<"Tk = "<<titikkelvin<<"K"<<endl;
		
		cout <<"================================="<<endl;
		cout <<titikcelcius<<"C = "<<titikreamur<<"R"<<endl;
		cout <<titikcelcius<<"C = "<<titikfarenheit<<"F"<<endl;
		cout <<titikcelcius<<"C = "<<titikkelvin<<"K"<<endl;		
	}else{
		//rumus celcius ke reamur
		hasilbagi2 = 4.0 / 5.0;
		titikreamur2 = hasilbagi2 * titikcelcius;
		//rumus celcius ke farenheit
		hasilbagi3 = 9.0 / 5.0;
		hasilkali3 = hasilbagi3 * titikcelcius;
		titikfarenheit2 = hasilkali3 + 32.0;
		//rumus konversi celcius ke kelvin
		titikkelvin2 = titikcelcius + 273.0;
		
		//konversi reamur
		cout <<"Konversi Celcius ke Reamur"<<endl;	
		cout <<"Tr = 4 / 5 * Tc"<<endl;
		cout <<"Tr = (4 / 5) * "<<titikcelcius<<endl;
		cout <<"Tr = "<<4.0/5.0<<" * "<<titikcelcius<<endl;
		cout <<"Tr = "<<titikreamur2<<"R"<<endl;
		//konversi farenheit
		cout <<"Konversi Celcius ke Farenheit"<<endl;
		cout <<"Tf = 9 / 5 * Tc + 32"<<endl;
		cout <<"Tf = (9 / 5) * "<<titikcelcius<<" + 32"<<endl;
		cout <<"Tf = ("<<hasilbagi3<<" * "<<titikcelcius<<") + 32"<<endl;
		cout <<"Tf = "<<hasilkali3<<" + 32"<<endl;
		cout <<"Tf = "<<titikfarenheit2<<"F"<<endl;
		//konversi kelvin
		cout <<"Konversi Celcius ke Kelvin"<<endl;
		cout <<"Tk = Tc + 273"<<endl;
		cout <<"Tk = "<<titikcelcius<<" + 273"<<endl;
		cout <<"Tk = "<<titikkelvin2<<"K"<<endl;
		
		cout <<"================================="<<endl;
		cout <<titikcelcius<<"C = "<<titikreamur2<<"R"<<endl;
		cout <<titikcelcius<<"C = "<<titikfarenheit2<<"F"<<endl;
		cout <<titikcelcius<<"C = "<<titikkelvin2<<"K"<<endl;
	}
	return 0;
}
