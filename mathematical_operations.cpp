//create mathematical operations 
#include <iostream>
using namespace std;

int main(){
  float hasiljumlah, hasilkurang, hasilkali, hasilbagi, angkapertama, angkakedua;

  cout <<"============================"<<endl;
  cout <<"OPERASI MATEMATIKA SEDERHANA"<<endl;
  cout <<"============================"<<endl;
  cout <<"Masukkan Angka Pertama : ";
  cin >>angkapertama;
  cout <<"Masukkan Angka Kedua : ";
  cin >>angkakedua;
  cout <<"============================"<<endl;

  hasiljumlah = angkapertama + angkakedua;
  hasilkurang = angkapertama - angkakedua;
  hasilkali = angkapertama * angkakedua;
  hasilbagi = angkapertama / angkakedua;

  cout <<"Hasil Penjumlahan "<<angkapertama<<" + "<<angkakedua<<" adalah "<<hasiljumlah<<endl;
  cout <<"Hasil Pengurangan "<<angkapertama<<" - "<<angkakedua<<" adalah "<<hasilkurang<<endl;
  cout <<"Hasil Perkalian "<<angkapertama<<" * "<<angkakedua<<" adalah "<<hasilkali<<endl;
  cout <<"Hasil Pembagian "<<angkapertama<<" / "<<angkakedua<<" adalah "<<hasilbagi<<endl;
  return 0;
}
