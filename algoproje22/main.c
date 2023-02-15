#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//ESRANUR SEVILMIS-20360859026

//PROGRAMIMIZDA KULLANACAGIMIZ GEREKLI FONKSIYON TANIMLARI\\

void cevap_anahtari_uret(char cevap_anahtari[ ], int S);
void cevap_anahtari_yazdir(char cevap_anahtari[ ], int S);
void sinavi_uygula(char ogrenci_cevaplari[ ][100], char cevap_anahtari[ ], int N, int S, double B, double D);
void ogrenci_cevabini_yazdir(char ogrenci_cevaplari[ ][100], int ogrenci_ID, int S);
void ogrencileri_puanla(char ogrenci_cevaplari[ ][100], char cevap_anahtari[ ], double HBN[ ], int N, int S);
double sinif_ortalamasi_hesapla(double HBN[ ], int N);
double standart_sapma_hesapla(double ortalama, double HBN[ ], int N);
void T_skoru_hesapla(double ortalama, double HBN[ ], int N, double std, double T_skoru[ ]);
void tablo(double ortalama,double T_skoru[ ],int N,double h_notu[ ]);
void harf_notu_hesapla(double x,double T_skoru[ ],int N,double h_notu[ ]);
void puan_yazdir(double HBN[ ],double T_skoru[],double h_notu[ ],int N);

int main()
{
   srand(time(NULL));
   int n,s;
   double bos,dogru;
   //KULLANICIDAN GEREKLI DEGERLER ALINDI VE YUKARIDA TANIMLANAN DEGISKENLERE ATANDI.
   printf("Ogrenci sayisini giriniz (max 100): ");
   scanf("%d",&n);
   printf("soru sayisini giriniz (max 100): ");
   scanf("%d",&s);
   printf("Bos birakma ihtimalini giriniz (0.0~1.0): ");
   scanf("%lf",&bos);
   printf("Dogru cevap verme ihtimlini giriniz (0.0~1.0): ");
   scanf("%lf",&dogru);

   //sinav uretici modulunu olusturmak icin parametreler olusturuldu ve gerekli fonksiyonlara yollandi.ve fonksiyonlar cagrildi.
   char cevap_anahtari[s];
   char ogrenci_cevaplari[s][100];
   cevap_anahtari_uret(cevap_anahtari,s);
   cevap_anahtari_yazdir(cevap_anahtari,s);
   printf("\n\n");

   sinavi_uygula(ogrenci_cevaplari,cevap_anahtari,n,s,bos,dogru);
   for(int i=0;i<n;i++){
    printf("%.3d. ogrencinin cevaplari:\n",i+1);
     ogrenci_cevabini_yazdir(ogrenci_cevaplari,i,s);
     puts("");
    }
   //sinav uretici modulunu olusturmak icin parametreler olusturuldu ve gerekli fonksiyonlara yollandi.ve fonksiyonlar cagrildi.
   double ort,ssapma,t_skorlar[n];
   double basari_notlari[n];
   ogrencileri_puanla(ogrenci_cevaplari,cevap_anahtari, basari_notlari, n,s);
   ort=sinif_ortalamasi_hesapla(basari_notlari,n);
   ssapma=standart_sapma_hesapla(ort,basari_notlari,n);
   printf("\n\nSinif ortalamasi: %f,standart sapma: %f\nSinif Duzeyi: ",ort,ssapma);//hesaplanan 3 degerin konsola yazdirilmasi.
   puts(" ");

   double harf_notlari[n];
   T_skoru_hesapla(ort, basari_notlari,n,ssapma, t_skorlar);
   tablo(ort,t_skorlar,n,harf_notlari);

   puan_yazdir(basari_notlari,t_skorlar,harf_notlari,n);



    return 0;
}
void cevap_anahtari_uret(char cevap_anahtari[], int S)
{
//ASCII tablosuna gore 'A' harfinden baslamak kaydiyla 'E' harfine kadar olan karakterlerden random secilerek bir cevap anahtari uretildi.
    for(int i=0;i<S;i++)
      cevap_anahtari[i]=(char)(65+rand()%5);//ve olusturulan her karakter bir char dizisine atildi.ve cevap anahtarimizi elde etmis olduk.
}

void cevap_anahtari_yazdir(char cevap_anahtari[ ], int S)
{  //cevap_anahtari_uret fonksiyonunda urettigimiz cevaplarin konsolda gosterimi.
     printf("Cevap Anahtari:\n");
    for(int i=0;i<S;i++)
    printf("%.3d:%c | ",i+1,cevap_anahtari[i]);
}

void sinavi_uygula(char ogrenci_cevaplari[][100], char cevap_anahtari[ ], int N, int S, double B, double D)
{ //kullanicidan aldigimiz bos ve dogru isaretleme ihtimallerine gore ogrencilere sinav uygulama fonksiyonu.
    srand(time(NULL));
  for(int i=0;i<N;i++){
    for(int j=0;j<S;j++){                                //random degiskeni icteki for dongusunde atanir cunki her ogrencinin her soruyu cozmeden o soruyu yapabilme yetenegi belirlenmelidir.
  double random=((double)rand()/(double)(RAND_MAX)) * 1; // aksi halde distaki dongude olsaydi ogrenciler butun testi hep ayni isaretlerdi ve cevaplar ya hep yanlis ya hep bos ya da dogru olurdu.
  if(random<=B) //B degiskeni sinir gibi kabul edilmelidir.ogrenci soruyu ya isaretleyecek ya da bos birakacaktir.
    ogrenci_cevaplari[j][i]='X';//BOS BIRAKMA DURUMU.Cevap 'X' olarak belirtilir.

    else if(random>B && random<=D+B) //eger ogrenci isaretleme sinirini gecerse ama dogru yapma ve bos yapma ihtimallerinin de altindaysa soruyu dogru yapmalidir.
            ogrenci_cevaplari[j][i]=cevap_anahtari[j];//DOGRU CEVAPLAMA DURUMU

    else if(random>B+D){//ogrenci dogru ve bos sinirini da gectiyse cevap artik yanlis olmalidir.
      char yanlis_cevap = (char)('A'+ rand()%5);//5 secenekten birisini rastgele secip yanlis cevap olarak belirledik.
        while(yanlis_cevap == cevap_anahtari[j]) {//ancak dogru secenek olmadigi surece ogrenci yanlis cevabini verebilir.eger dogruysa donguye girer.
            yanlis_cevap = (char)('A'+ rand()%5); // ve dongude bu sart saglandigi surece dogru cevaptan baska bir cevap uretmeye devam eder.
}
         ogrenci_cevaplari[j][i] = yanlis_cevap; // YANLIS CEVAPLAMA DURUMU.
}
        }
    }
 }

void ogrenci_cevabini_yazdir(char ogrenci_cevaplari[ ][100],int ogrenci_ID, int S)
{ //sinavi_uygula metodunda ogrencilerin cevaplarini tuttugumuz diziyi (ogrencilerin her biri indisle(ID) temsil ediliyor) konsola yazdirdik.
    for(int i=0;i<S;i++){
        printf("%.3d:%c | ",i+1,ogrenci_cevaplari[i][ogrenci_ID]);
    }
}

void ogrencileri_puanla(char ogrenci_cevaplari[ ][100], char cevap_anahtari[ ], double HBN[ ], int N, int S)
{
     double soru_degeri=100.0/S;//100 uzerinden her sorunun puan degeri
     int count=0; //toplam yanlislarin sayisi
    for(int i=0;i<N;i++){
            count=0.0; //count her ogrenci icin sifirlanir.
        for(int j=0;j<S;j++){
               if(ogrenci_cevaplari[j][i]==cevap_anahtari[j])
                HBN[i]+=soru_degeri; //her dogru cevapta ogrencinin basari notu soru degeri kadar artýrýlýr.
                else if(ogrenci_cevaplari[j][i]=='X')
                    HBN[i]+=0.0; //bos cevaplar puana etki etmiyor.
               else
                count++; //her yanlis cevapta sayaci bir artirdik.
        }
       HBN[i]-=(count/4)*soru_degeri; //4 yanlis 1 dogruyu goturdugunden kayip puanlari HBN den eksilttik.

        if(HBN[i]<0) //yanlis cevaplarin dogrulardan fazla olmasi durumunda ogrencinin notu 0 yapildi.
            HBN[i]=0.0;
    //TUM VERILER BIR DOUBLE DIZISINE HER OGRENCI ICIN KAYDEDILDI.
    }
}

double sinif_ortalamasi_hesapla(double HBN[ ], int N)
{
    //Alinan HBN dizisinden elde edilen notlarla sinif ortalamasi hesabi yapildi.
    double toplam,ortalama;
   for(int i=0;i<N;i++){
     toplam+=HBN[i];
}
    ortalama=toplam/N;
     return ortalama;
}

double standart_sapma_hesapla(double ortalama, double HBN[ ], int N)
{
    //Notlar ve ortalama degerlerini kullanarak standart sapma hesabi yapildi.
  double stdsapma,toplam=0.0;

  for(int i=0;i<N;i++){
    toplam+=pow(HBN[i]-ortalama,2);
  }
  toplam=toplam/N;
  stdsapma=sqrt(toplam);
  return stdsapma;
}


void T_skoru_hesapla(double ortalama, double HBN[ ], int N, double std, double T_skoru[ ])
{
    //Ogrencilerin elde edilen ortalama ve standart sapma degerlerine gore T skorlari belirlendi.
    double skor;
  for(int i=0;i<N;i++){
    skor=0.0;
    skor=(HBN[i]-ortalama)/std;
    skor=skor*10+60;
    T_skoru[i]=skor; //bu degerler dizide tutuldu.
  }

}

void tablo(double ortalama,double T_skoru[ ],int N,double h_notu[ ])
{ //tablodaki verilere gore once sinif ortalamasiyla sinif duzeyi ardýndan sinif duzeyine gore de harf notu hesaplanilan fonksiyon cagrildi.
  //fonksiyona tablodaki FF harf notunun sinir degerini parametre olarak yolladik(sinif duzeyine gore).
    if(ortalama<=42.5){
        printf("Kotu");
     harf_notu_hesapla(46,T_skoru,N,h_notu);
    }
    else if(ortalama>42.5&&ortalama<=47.5){
        printf("Zayif");
        harf_notu_hesapla(44,T_skoru,N,h_notu);
    }
    else if(ortalama>47.5&&ortalama<=52.5){
        printf("Orta");
        harf_notu_hesapla(42,T_skoru,N,h_notu);
    }
    else if(ortalama>52.5&&ortalama<=57.5){
        printf("Ortanin Ustu");
        harf_notu_hesapla(40,T_skoru,N,h_notu);
    }
    else if(ortalama>57.5&&ortalama<=62.5){
        printf("Iyi");
        harf_notu_hesapla(38,T_skoru,N,h_notu);
    }
    else if(ortalama>62.5&&ortalama<=70.0){
        printf("Cok Iyi");
        harf_notu_hesapla(36,T_skoru,N,h_notu);
    }
    else if(ortalama>70.0&&ortalama<=80.0){
        printf("Mukemmel");
        harf_notu_hesapla(34,T_skoru,N,h_notu);
    }
    else{
        printf("Ustun Basari");
        harf_notu_hesapla(32,T_skoru,N,h_notu);
    }

}

void harf_notu_hesapla(double x,double T_skoru[ ],int N,double h_notu[ ])
{  //tablodaki her harf notunun arasinda 5 puan var.burdan yola cikarak her islemi her sinif duzeyi icin ayri ayri yapmak yerine bu fonksiyon yazildi.
   //fonksiyon alinan x degeri(FF sinir notu) ile T skorlarini kiyasliyor ve her x in 5 artisinda harf notuna karsilik double notlar 0.5 artiriliyor.
   //ve bunu her ogrenci icin hesaplayip bir diziye sakliyoruz.
    for(int i=0;i<N;i++){
        if(T_skoru[i]<x)
           h_notu[i]=0.0;
        else if(T_skoru[i]>x&&T_skoru[i]<x+5)
            h_notu[i]=0.5;
        else if(T_skoru[i]>=x+5&&T_skoru[i]<x+10)
            h_notu[i]=1.0;
        else if(T_skoru[i]>=x+10&&T_skoru[i]<x+15)
            h_notu[i]=1.5;
        else if(T_skoru[i]>=x+15&&T_skoru[i]<x+20)
            h_notu[i]=2.0;
        else if(T_skoru[i]>=x+20&&T_skoru[i]<x+25)
            h_notu[i]=2.5;
        else if(T_skoru[i]>=x+25&&T_skoru[i]<x+30)
            h_notu[i]=3.0;
        else if(T_skoru[i]>=x+30&&T_skoru[i]<x+35)
            h_notu[i]=3.5;
        else
            h_notu[i]=4.0;
    }
}
void puan_yazdir(double HBN[ ],double T_skoru[ ],double h_notu[ ],int N)
{ //son olarak ogrencilerin HBN, T skorlari ve harf notlarini konsola yazdiriyoruz.
    printf("\n\nOgrenci notlari:\n");
    for(int i=0;i<N;i++){
  printf("%.3d. ogrencinin HBN:  %.2f, ",i+1,HBN[i]);
  printf("T-skoru:  %.2f, harf notu:  ",T_skoru[i]);

//Bu notlari harf_notu_hesapla fonksiyonunda ondalik degerler olarak tutmustuk. asagida ise bu degerlere gore ve tablodaki karsiliklarina gore harf notu olarak
//Ve HBN ve T skorlariyla yan yana gosterilmesini saglamis olduk.
(h_notu[i]==0.0)? printf("FF\n"):(h_notu[i]==0.5)?printf("FD\n"):(h_notu[i]==1.0)? printf("DD\n"):(h_notu[i]==1.5)?printf("DC\n"):(h_notu[i]==2.0)?
 printf("CC\n"):(h_notu[i]==2.5)?printf("CB\n"):(h_notu[i]==3.0)?printf("BB\n"):(h_notu[i]==3.5)? printf("BA\n"):printf("AA\n");
}
}
