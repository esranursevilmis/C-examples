#include <stdio.h>
#include <stdlib.h>
int topla(int *aptr,int dizi[]);
int main()
{
   int sayilar[]={5,7,4,3,8};
  for(int i=0;i<5;i++){
    printf("%d ",sayilar[i]);
  }
  puts("");
  int *dptr;
  //dptr=&sayilar;
  //dptr=sayilar;        Bunlarin ucu de ayni anlama gelir.
  //dptr=&sayilar[0];
  printf("Adres: %p\nDeger: %d\n",dptr,*dptr);

  int *ptr=sayilar;
  printf("*(ptr): \t%d\n", *(ptr));       // sayilar[0]
  printf("*(ptr+1): \t%d\n", *(ptr+1));   // sayilar[1]
  printf("*(ptr+2): \t%d\n", *(ptr+2));   // sayilar[2]
  printf("*(ptr+3): \t%d\n", *(ptr+3));   // sayilar[3]

  //sayilar+=2; // izin verilen bir þey deðil çünkü dizi isimleri const pointerlardýr.
    ptr += 2;
    printf("After +=2 *ptr: %d\n", *ptr);
    printf("*(++ptr): \t%d\n", *++ptr);
    printf("*(++ptr): \t%d\n", *++ptr);
    printf("*(--ptr): \t%d\n", *--ptr);

    dPtr = sayilar;
    for(int i=0; i < 5; i++){
        *dPtr += 5;    // sayilar[i] += 5;
        dPtr++;
    }

    for(int i=0; i < 5; i++)
        printf("%d ",sayilar[i]);
    puts("");


    // Yapılabilecek hata
    int x[4] = {3,1,2,4};
    int* ptr = &x;
    printf("%d", *(ptr+1)); // == ptr[0] + 1 *(ptr+1)

    printf("Elemanlar toplami: %d",topla(ptr,sayilar));//pointer ý metoda parametre olarak gondererek dizi elemanlarini yazdirma.

    return 0;
}
int topla(int *aptr,int dizi[]){
    aptr=dizi;
int i;
int toplam=0.0;
for(i=0;i<=4;aptr++,i++){

    toplam+=*aptr;

}
 return toplam;
}
