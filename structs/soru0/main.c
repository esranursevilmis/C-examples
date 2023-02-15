#include <stdio.h>
#include <stdlib.h>

int main()
{  struct ogrenci {//ogrenci bir degiaken ismi degildir.
  char isim[15];
   int yas;
   float ortalama;
   char cinsiyet;
};
   struct ogrenci kisi ={"Esra Sevilmis",21,2.13,'K'}; //kisi degiskeni icin bellekte veri tiplerine uygun uzunlukta yer acilir.
    //yapilara ilk degerler atanir.
    //kisi yapi elemanlarina ulasim
    kisi.isim[2]='r';
    scanf("%c",&kisi.cinsiyet);
    printf("%s\n",kisi.isim);
    if(kisi.ortalama>3)
        printf("Burs kazandiniz.\n");
    else
       printf("Burs kazanamadiniz.\n");


    return 0;
}
