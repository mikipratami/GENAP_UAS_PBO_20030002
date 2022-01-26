// Nama	: Miki Pratami
// NIM	: 20030002
// Prodi : Informatika
#include <iostream>
#include <conio.h>
using namespace std;
class bangun
{
protected:
     int p,l,r;
       double phi=3.24;
 public:
    virtual void get_data()=0;
       virtual void display_area()=0;
};
class LuasTabung : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas selimut tabung\n\n";
       cout<<"Masukan Panjang   = "; cin>>p;
       cout<<"Masukan Lebar     = "; cin>>l;
    }
    void display_area(void)
    {
       double luas;
       luas = p * l;
       cout<<"\nDik : panjang = "<<p;
       cout<<"\n       lebar  = "<<l;
       cout<<"\n\nDit : luas selimut tabung";
       cout<<"\n\npenyelesaian\n";
       cout<<"luas selimut = panjang x lebar\n";
       cout<<"             = "<<p<<" x "<<l;
       cout<<"\n             = "<<l;
}
};
class VolumeTabung : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Volume Tabung\n\n";
       cout<<"Masukan Panjang   = "; cin>>p;
       cout<<"Masukan Lebar     = "; cin>>l;
       cout<<"Masukan Jari-Jari = "; cin>>r;
    }
    void display_area(void)
    {
    	double volume;
		volume = phi * r * r * l;
        cout<<"\nDik : panjang   = "<<p;
        cout<<"\n      lebar     = "<<l;
        cout<<"\n      jari-jari = "<<r;
        cout<<"\n\nDit : volume tabung";
        cout<<"\n\npenyelesaian\n";
        cout<<"volume tabung = phi x jari x jari x lebar\n";
        cout<<"    	      = "<<phi<<" x "<<r<<" x "<<r<<" x "<<l;
        cout<<"\n	      = "<<volume;
}
};
int main()
{
system("cls");
LuasTabung luas;
VolumeTabung volume;

bangun *list[2];
list[0]=&luas;
list[1]=&volume;

int pilih;
while(1)
{
system("cls");
  cout<<"       ***  UAS PBO  ***";
  cout<<"\n =============================\n";
  cout<<"| Program Bangun Datar Tabung |";
  cout<<"\n =============================\n";
  cout<<"| 1) Luas Selimut Tabung      |\n";
  cout<<"| 2) Volume Tabung            |\n";
  cout<<"| 3) Exit                     |\n";
  cout<<" =============================\n";
  cout<<"\nMasukkan Pilihan:- ";
  cin>>pilih;
  
  if(pilih==1){
          list[0]->get_data();
          list[0]->display_area();
          getch();
          }
  else if (pilih==2){
          list[1]->get_data();
          list[1]->display_area();
          getch();
          }
 else
     exit(1);
}
}
