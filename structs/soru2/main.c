#include <stdio.h>
#include <stdlib.h>

typedef enum{  //enum listemizi basta tanimlayip struct ta oyle kullansak daha iyi olur.
    bay,bayan
}cinsiyet;

typedef enum{
    pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar

}gunler;
typedef struct
{
   int yas;
   char* isim;
   cinsiyet c;
   gunler tatilgunu;
}insan;

//STRUCTLAR BIR FONKSIYONDA PARAMETRE OLABILIR//
int emeklimi(insan *birey){
   if(birey->c==bay&&birey->yas>55)
    return 1;
   if(birey->c==bayan&&birey->yas>50)
    return 1;
return 0;
}
int main()
{
   int a;
   insan ali;
   ali.yas=30; //ali i gosteren bir pointer: aptr. aptr->yas=30 da yapabilirdik.
   printf("yas: %d\n",ali.yas);
   //ali.cinsiyet=bay;//hata verir
   ali.c=bay; //enumdaki index ini gosterir.
   printf("cinsiyet: %u\n",ali.c);
   ali.tatilgunu=pazar; //enumdaki index ini gosterir.
   printf("tatil gunu: %u\n",ali.tatilgunu);
   //STRUCTLARDA POINTER TANIMLAYABILIRIZ//
   insan* veli;
   veli=(insan*)malloc(sizeof(insan));
   veli->c=bay;
   veli->yas=60; //eger bir struct pointer ý tanimlaniyorsa ok isareti (structue pointer) kullanilir.
                 //eger normal bir degisken (or:ali.yas gibi) nokta kullaniriz.
   printf("velinin yasi: %u\n",veli->yas);
   printf("ali emekli mi? %d\n",emeklimi(&ali));//ali pointer degil
   printf("veli emekli mi? %d\n",emeklimi(veli)); //veli pointer (shallow copy)(call by reference)


    return 0;
}
