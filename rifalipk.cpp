#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>

struct hasil
            {
         char nama[20],nim[9],kelas[25];
         float tugas,mid,uas,nilai,ipk;
          } ;

int main()
{
hasil mhs ; // pendefinisian var struktur
awal:

cout<<"\t\t\tUNFERSITAS TEKNOLOGI YOGYAKARTA";
cout<<"\n\t\t\t_____________________________\n";
cout<<endl;
cout<<endl;
cout<<" Masukkan Nama     = ";
gets(mhs.nama);
cout<<" Masukkan NIM       = ";
gets(mhs.nim);
cout<<" Masukkan Kelas     = ";
gets(mhs.kelas);

//penginputan nilai awal
cout<<"\n Masukkan Nilai Tugas   = ";
cin>>mhs.tugas;

cout<<" Masukkan Nilai UTS     = ";
cin>>mhs.mid;

cout<<" Masukkan Nilai UAS     = ";
cin>>mhs.uas;
cout<<endl;
mhs.nilai=(mhs.tugas*0.3)+(mhs.mid*0.4)+(mhs.uas*0.3);
cout<<"===============================";
cout<<"\n Total Nilai       = "<<setiosflags(ios::fixed)<<setprecision(2)<<mhs.nilai;

cout<<"\n\n Nilai Huruf  : ";

if (mhs.nilai>75 && mhs.nilai<=100)
cout<<"A";
else if (mhs.nilai>65 && mhs.nilai<=75)
cout<<"B";
else if (mhs.nilai>55 && mhs.nilai<=65)
cout<<"C";
else if (mhs.nilai>45 && mhs.nilai<=55)
cout<<"D";
else if (mhs.nilai>0 && mhs.nilai<=45)
cout<<"E";

cout<<"\n\n Nilai Grade Anda : ";

if (mhs.nilai>75 && mhs.nilai<100)
cout<<"4";
else if (mhs.nilai>65 && mhs.nilai<=75)
cout<<"3";
else if (mhs.nilai>55 && mhs.nilai<=65)
cout<<"2";
else if (mhs.nilai>45 && mhs.nilai<=55)
cout<<"1";
else if (mhs.nilai>0 && mhs.nilai<=45)
cout<<"0";

mhs.ipk=mhs.nilai/24;
cout<<endl;
cout<<"\n IPK Anda = "<<setiosflags(ios::fixed)<<setprecision(2)<<mhs.ipk;
    balik:
   cout<<"\n\n Apakah  Ingin Mengulang [Y/N] ? "  ;
char m ;
cin>>m;
if (m == 'y' || m== 'Y')
 {
 clrscr();
 goto awal;
 }
else if (m == 'n' || m== 'N')
{
 goto akhir;
}
 else
{
 cout<<"Maaf Keyword Salah "<<endl;
 goto balik;
}
akhir:
cout<<"\n\n\t\t\t    \"TERMA KASIH\"";
getch();
    }
