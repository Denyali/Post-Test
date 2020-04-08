#include <iostream>

using namespace std;

int main()
{
int nilai[10];
int i,n,angka,bilangan;

cout<<"  Masukan Jumlah Maksimum Array = ";
cin>>n;

//membaca elemen array
for(i=0;i<n;i++){
cout<<"  Masukan Array Ke -"<<i<<" = ";
cin>>nilai[i]; }

//Memasukan Nilai Bilangan
cout<<"  Tampilkan Array  = ";
for(i=0;i<n;i++)
cout<<nilai[i]<<" ";
cout<<endl<<endl;
cout<<"  Masukan Nilai Yang Di Cari  = ";
cin>>bilangan;
cout<<endl;

//Pencarian Bilangan
i=0;
do{
if(nilai[i]==bilangan)
angka=nilai[i];
i++;}
while(i<n);
if(angka==bilangan)
cout<<"  Ditemukan Hasil Pencarian Sebanyak :"<<bilangan<<endl;
else
cout<<"  Tidak Di Temukan"<<bilangan<<endl;


    return 0;
}
