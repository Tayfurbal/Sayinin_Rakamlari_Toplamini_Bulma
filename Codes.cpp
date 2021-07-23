#include <iostream.h>
#include <conio.h>

main ()
{
int sayi, yedek_sayi, rakam, toplam=0, sayac=0;
do
{
  cout<<"\nLutfen pozitif bir tam sayi giriniz (cikmak icin 0 giriniz):";
  cin>>sayi;
  yedek_sayi=sayi;

  if(yedek_sayi<0)
   {
	  if(sayac==0) cout<<"Girdiginiz sayi pozitif olmali..."<<endl;
	  if(sayac==1) cout<<"Negatif sayi girmekte israrci misiniz..."<<endl;
	  if(sayac==2) cout<<"Maalesef hesaplamiyorum..."<<endl;
	  if(sayac>=2)
		 sayac=0;
	  else
		 sayac++;
   }
   if(sayi>0)
   {
	while (sayi>0)
	  {
		  rakam=sayi%10;
		  toplam=toplam+rakam;
		  sayi=(sayi/10);
	  }
		 cout<<"\nGirilen sayidaki rakamlarin toplami="<<toplam;
	 toplam=0;
	 sayac=0;
   }
}
   while (yedek_sayi!=0);

 cout<<"Programi kullandiginiz icin tesekkurler"<<endl;
 getch();
}

