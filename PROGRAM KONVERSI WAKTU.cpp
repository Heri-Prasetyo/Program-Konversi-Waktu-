#include<iostream>
using namespace std;
int main(){
int Detik,Hari,Jam,Menit;

cout<<"PROGRAM KONVERSI WAKTU JAMAN NOW"<<endl;

cout<<"Konversi Waktu Detik Ke Hari : ";
cin>>Detik;
Detik=Detik/86400;
cout<<"Hasilnya Adalah : "<<Detik<<" Hari"<<endl;

cout<<"Konversi Waktu Detik Ke Jam : ";
cin>>Detik;
Detik=Detik/3600;
cout<<"Hasilnya Adalah : "<<Detik<<" Jam"<<endl;

cout<<"Konversi Waktu Detik Ke Menit : ";
cin>>Detik;
Detik=Detik/60;
cout<<"Hasilnya Adalah : "<<Detik<<" Menit"<<endl;
return 0;



}
