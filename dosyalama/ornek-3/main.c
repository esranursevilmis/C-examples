#include <stdio.h>
#include <stdlib.h>
typedef struct Ogrenci{
   int no;
   char ad[21];
   int not;

}ogr;
ogr * ogrenciler;
int ogrenci_sayisi;

void DosyaYaz(){
    printf("OGRENCI BILGILERINI GIRINIZ:\n-------------------------\n\n");
  for(int i=0;i<ogrenci_sayisi;i++){
    printf("%d. Ogrenci No: ",i+1);
    scanf("%d",&ogrenciler[i].no);
    printf("%d. Ogrenci Ad: ",i+1);
    scanf("%s",&ogrenciler[i].ad);
    printf("%d. Ogrenci Not: ",i+1);
    scanf("%d",&ogrenciler[i].not);
    printf("\n");
  }
FILE *fptr=fopen("ogrenci_bilgi.txt","w");
if(fptr==NULL){
    printf("dosya acilamadi!");
    exit(1);}
else{
    for(int i=0;i<ogrenci_sayisi;i++){
            fprintf(fptr,"%d\t%s\t%d\n",ogrenciler[i].no,ogrenciler[i].ad,ogrenciler[i].not); //struct kullanma sebebi yazmaya ozel degil ornek vermek icin.
}
}
fclose(fptr);
printf("OGRENCI BILGILERI KAYDEDILDI!");
}

void DosyaOku(){
        printf("\n\nOGRENCI BILGILERI DOSYADAN OKUNUYOR\n\nOGRENCI BILGILERI\n\n");
        int numarasi,notu;
        char adi[21];

        FILE * fptr=fopen("ogrenci_bilgi.txt","r");
         if(fptr==NULL){
            printf("dosya acilamadi!");
             exit(1);}
         else{
            for(int i=0;i<ogrenci_sayisi;i++){
              fscanf(fptr,"%d\t%s\t%d\n",&numarasi,adi,&notu);
              printf("\nNO: %d\n ADI: %s\n NOTU: %d\n",numarasi,adi,notu);
            }
         }
         fclose(fptr);
     }

int main(){
    printf("Kac ogrenci var? ");
    scanf("%d",&ogrenci_sayisi);
   ogrenciler=(ogr*)malloc(ogrenci_sayisi * sizeof(ogr));

    DosyaYaz();
    DosyaOku();
    return 0;
}
