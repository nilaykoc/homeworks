/*  odev1.c
 *  bu program  girdiğiniz sayılara göre yıldızlarla üçgen yapar
 *  nilay KOÇ
 * 
 */

#include <iostream>

using namespace std;

void DuzUcgen( int n); //PROTOTİPLERİ TANIMLADIM
void TersUcgen( int n);
void Elmas( int n);


int main(int argc, char **argv)
{
	int sayi,n;
	int hak=3; // HAK I İLKLENDİRDİM
	cout<< "1-duz ucgen" << "2-ters ucgen" << "3-elmas"<< endl<<endl;
	cout<< "istedigin sekil icin 1 ile 3 arasinda sayi giriniz:";
	cin>>sayi;
	cout<<endl;
	switch(sayi)
	{
		case 1: // EĞER 1 GİRERSE KULLANICI DÜZ ÜÇGEN YAPAR 
			cout  << "yildizlarla cizmek istediginiz ucgenin boyutunu 3-15 arasindaki tek sayilarla girin: "; // ARALIĞIMIZ 3 İLE 15 TİR
			cin>> n;
			while(hak !=0) // HAK O OLDUĞUNDA KAPANIR HAKKI OLDUĞUNDA WHİLE GİRER
			{
				if(3<=n && n<=15 && n%2==1) // GİRİLEN SAYI 3 İLE 15 ARASINDA VE TEKSE 
				{
					DuzUcgen(n); // DÜZ ÜÇGEN FONKSİYONU ÇAĞIRILIR
					return 0;
				}
				else // ARALIKTA DEĞİL VEYA ÇİFTSE 
				{
					cout << "lutfen gecerli aralikta sayi girin: ";
					cin >> n;
					hak--; // HAK AZALIR
				}
			}
			break;
		case 2: // EĞER 2 GİRERSE KULLANICI TERS ÜÇGEN YAPAR
		cout  << "yildizlarla cizmek istediginiz ucgenin boyutunu 3-15 arasindaki tek sayilarla girin: "; // ARALIĞIMIZ 3 İLE 15 TİR
			cin>> n;
			while(hak !=0) // HAK O OLDUĞUNDA KAPANIR HAKKI OLDUĞUNDA WHİLE GİRER
			{
				if(3<=n && n<=15 && n%2==1) // GİRİLEN SAYI 3 İLE 15 ARASINDA VE TEKSE
				{
					TersUcgen(n); // DÜZ ÜÇGEN FONKSİYONU ÇAĞIRILIR
					return 0;
				}
				else  // ARALIKTA DEĞİL VEYA ÇİFTSE 
				{
					cout << "lutfen gecerli aralikta sayi girin: ";
					cin >> n;
					hak--; // HAK AZALIR
				}
			}
			break;
		case 3: // EĞER 3 GİRERSE KULLANICI ELMAS YAPAR
		cout  << "yildizlarla cizmek istediginiz ucgenin boyutunu 5-15 arasindaki tek sayilarla girin: "; // ARALIĞIMIZ 5 İLE 15 TİR
			cin>> n;
			while(hak !=0) // HAK O OLDUĞUNDA KAPANIR HAKKI OLDUĞUNDA WHİLE GİRER
			{
				if(5<=n && n<=15 && n%2==1) // GİRİLEN SAYI 5 İLE 15 ARASINDA VE TEKSE
				{
					Elmas(n); // ELMAS FONKSİYONU ÇAĞIRILIR
					return 0;
				}
				else // ARALIKTA DEĞİL VEYA ÇİFTSE 
				{
					cout << "lutfen gecerli aralikta sayi girin: ";
					cin >> n;
					hak--; // HAK AZALIR
				}
			}
			break;
	}
	return 0;
}

void DuzUcgen( int n) // DÜZ ÜÇGEN FONKSİYONUMUZ
{
     int yildiz,bosluk;
     yildiz=1; // TEPEDE TEK YILDIZ VARDIR HER SATIRDA 2 ARTAR
     bosluk=n/2; // BOŞLUK N/2 DEN BAŞLAR VE AZALIR HER SEFERDE
	 for(int k=0; k<(n+1)/2; k++) // SATIR
	 {
		for(int s=0; s<bosluk; s++) // BOŞLUK
		{
			cout<<" ";
		}
		for(int s=0; s<yildiz; s++) // YILDIZ
		{
			cout<<"*";
		}
		cout<<endl;
		bosluk--;
		yildiz+=2; 
    }
}
		
void TersUcgen( int n) // TERS ÜÇGEN FONKSİYONUMUZ
{
    int i,j,l;
	int yildiz,bosluk;
	yildiz=n; // KULLANICININ GİRDİĞİ SAYIYLA BAŞLAR 
	bosluk=0; // BOŞLUK YOKTUR
	i=0;
	while(i<n)
		{
			j=0;
			while(j<bosluk)
            {
				cout<< " ";
				j++;
			}
			l=0;
			while(l<yildiz)
			{
				cout<< "*";
				l++;
			}
		    cout<< endl;
			bosluk++;
			yildiz-=2;
			i++;
		}
	
}

void Elmas( int n) // ELMAS DONKSİYONUMUZ
{
    DuzUcgen(n); // DÖNGÜSÜZ YAPTIĞIMIZ İÇİN SIRASIYLA FONKSİYONLARI ÇAĞIRIRIZ
    TersUcgen(n);
}
