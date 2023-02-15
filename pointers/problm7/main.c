#include <stdio.h>
#include <stdlib.h>
void hesapla(int s,int *sn,int *dk,int *st);

int main()
{  int saniye,s,m,h;
   printf("Yolculugun kac saniye surdugunu giriniz: ");
   scanf("%d",&saniye);
   hesapla(saniye,&s,&m,&h);
    return 0;
}
void hesapla(int s,int *sn,int*dk,int *st)
{
    *dk=s/60;
    *sn=s%60;
    *st=(*dk)/60;
    *dk=(*dk)%60;
    printf("Yolculuk %d saat %d dakika %d saniye surer.",*st,*dk,*sn);
}
