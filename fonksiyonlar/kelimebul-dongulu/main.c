#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char metin1[51],metin2[51];
   printf("Metni girin: ");
   gets(metin1);
   printf("Aranacak metni girin: ");
   gets(metin2);

   int indisler[51];
   int i,j,sayac=0;
   for(i=0;i<strlen(metin1)-strlen(metin2)+1;i++){ //arama islemi kac defa yapiliyor?
        for(j=0;j<strlen(metin2)+1;j++){ //harf harf arama yeri
          if(metin1[i+j]!=metin2[j])
             break;

   }
     if(j==strlen(metin2))
        indisler[sayac++]=i;
}
 indisler[sayac]=-1;
printf("aranan kelimenin girilen metinde bulundugu baslangic indisleri:");
  for(int i=0;i<strlen(metin1)-strlen(metin2)+1;i++){
  if(indisler[i]==-1)
       break;
    else
       printf("%d ",indisler[i]);

  }
    return 0;
}
