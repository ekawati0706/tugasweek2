#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct film {    
  string nama_film;
  string tahun;
};

film daftar[30]; 
int n,i,pilih; 

int main () {
  yu: //ini tag biar bisa kembali
  cout<<"\n====================\n";
  cout<<"Movie ~~\n";
  cout<<"====================\n";
  cout<<"1.Masukkan Daftar Film\n2.Tampilkan Data Film\n3.Keluar\n";
  cout<<"Masukkan Pilihan anda (a.1 b.2 c.3)= ";
  cin>>pilih;
  switch (pilih) { //pakai swich untuk menu pilihan
    case 1:
      cout<<"\n====================\n";
      cout<<"Masukkan banyak data : ";
      cin>>n;
      cout<<"Daftar nama Film yang tersedia :"<<endl;
      for (i=1; i<=n; i++) {
        cout<<"\nData ke- "<<i<<endl;
        cout<<"Nama film yang dipilih :";
        cin>>daftar[i].nama_film;
        cout<<"Masukkan Tahun :";
        cin>>daftar[i].tahun;
      }
      getch();
      goto yu; //hehe..

    case 2:
      cout<<"\n====================\n";
      cout<<"Ini Adalah Daftar Film-nyan~~";
      cout<<"\n====================\n";
      for (i=1; i<=n; i++) {
        cout<<endl<<endl<<"Data Film urutan ke-  "<<i<<endl;
        cout<<"Nama Film:"<<daftar[i].nama_film<<endl;
        cout<<"Tahun :"<<daftar[i].tahun<<endl;
      }
      cout<<"\n";
      getch();
      goto yu;

    default:
      cout<<"\nTerimakasih telah menonton.."<<endl;
      break;
  }

}


