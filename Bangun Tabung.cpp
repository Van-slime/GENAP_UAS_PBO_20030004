#include <iostream>
#include <conio.h>
using namespace std;

class bangun_datar
{
  protected:
       double p,r,l; //(p) panjang, (r) jari-jari, (l) lebar
  public:
       virtual void inputan()=0;
       virtual void tampilan()=0;
};
class luas_selimut : public bangun_datar
{
   public:
    	void inputan(void)
   		{
       		cout<<"------------------------------------\n";
       		cout<<"Masukkan Angka Untuk Menghitung Luas Selimut : \n\n";
       		cout<<"Panjang = "; 
	  		cin>>p;
       		cout<<"Lebar   = "; 
	   		cin>>l;
   		}
   		
    	void tampilan(void)
    	{
       	double luas;
        luas = p*l; //rumus
       		cout<<"----------------------------------------\n";
       		cout<<"----------------------------------------\n";
       		cout<<"Diketahui : Panjang = "<<p;
       		cout<<"\n	  : Lebar   = "<<l;   
       		cout<<"\nDitanya   : Luas Selimut  ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\nLuas Selimut = panjang x lebar ";
       		cout<<"\n                    = "<< p<< " x "<<l;
      	  	cout<<"\n                    = "<<luas;
       		cout<<"\n----------------------------------------\n";
    	}
};

class volume_tabung : public bangun_datar
{
   	public:
		void inputan(void)
    	{
       		cout<<"------------------------------------\n";
       		cout<<"Masukkan Angka Untuk Menghitung Volume Tabung : \n\n";
       		cout<<"Lebar = "; 
	   		cin>>r;
       		cout<<"Jari  = "; 
	   		cin>>l;
    	}
    	
		void tampilan(void)
    	{
       	double volume;
       	volume = 3.14*r*r*l; //rumus
       		cout<<"----------------------------------------\n";
       		cout<<"----------------------------------------\n";
       		cout<<"Diketahui : Lebar = "<<r;
       		cout<<"\n	  : Jari  = "<<l;   
       		cout<<"\nDitanya   : Volume Tabung ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\nVolume Tabung = phi x jari x jari x lebar ";
       		cout<<"\n              = 3.14 x "<<r<< " x " <<r<< " x " <<l;
       		cout<<"\n              = "<<volume;
       		cout<<"\n----------------------------------------\n";
    	}
};

class luas_selimut_dan_volume_tabung : public bangun_datar
{
    public:
    	void inputan(void)
    	{
       		cout<<"------------------------------------\n";
			cout<<"Masukkan Angka Untuk Menghitung\nLuas Selimut dan Volume Tabung : \n\n";
       		cout<<"Panjang     = "; 
	   		cin>>p;
       		cout<<"Lebar       = "; 
	   		cin>>l;
       		cout<<"Jari        = "; 
			cin>>r;
    	}
    	
		void tampilan(void)
    	{
        double selimut,volume;
        selimut = p*l; //rumus
        volume = 3.14*r*r*l; //rumus
       		cout<<"----------------------------------------\n";
       		cout<<"----------------------------------------\n";
       		cout<<"Diketahui : Panjang = "<<p;
       		cout<<"\n	  : Lebar   = "<<l; 
       		cout<<"\n          : Jari    = "<<r;  
       		cout<<"\nDitanya   : Luas Selimut  ";
       		cout<<"\n          : Volume Tabung       ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\nLuas Selimut   = panjang x lebar ";
       		cout<<"\n               = "<< p<< " x "<<l;
       		cout<<"\n               = "<<selimut;
       		cout<<"\nVolume Tabung  = phi x jari x jari x lebar ";
       		cout<<"\n               = 3.14 x "<<r<< " x " <<r<< " x " <<l;
       		cout<<"\n               = "<<volume;
       		cout<<"\n----------------------------------------\n";
    	}
};

int main()
{
	system("cls");
	luas_selimut luas;
	volume_tabung volume;
	luas_selimut_dan_volume_tabung tabung;

bangun_datar *list[2];
list[1]=&luas;
list[2]=&volume;
list[3]=&tabung;

int pilihan;
while(1)
{
system("cls");
  cout<<"------------------------------------";
  cout<<"\n|  MENGHITUNG BANGUN RUANG TABUNG  |\n";
  cout<<"-------- UAS PBO CODE GENAP --------\n";
  cout<<"|  Novan Ramdanu Saputra 20030004  |\n";
  cout<<"------------------------------------\n";
  cout<<"| 1. Luas Selimut                  |\n";
  cout<<"| 2. Volume Tabung	           |\n";
  cout<<"| 3. Luas Selimut & Volume Tabung  |\n";
  cout<<"------------------------------------\n";
  cout<<"Pilih Angka Untuk Melanjutkan : ";
  cin>>pilihan;
  
  if (pilihan==1){
          list[1]->inputan();
          list[1]->tampilan();
          getch();
          }
  else if (pilihan==2){
          list[2]->inputan();
          list[2]->tampilan();
          getch();
          }
else if (pilihan==3){
          list[3]->inputan();
          list[3]->tampilan();
          getch();
          }
  else
     exit(1);
}}

