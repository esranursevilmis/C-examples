#include <stdio.h>
#include <stdlib.h>
int topla(int a,int b,int *top,int *crp,int *ckr,int *bol);
int main()
{
 int x,y;
 printf("Ýki sayi giriniz: ");
 scanf("%d %d",&x,&y);
 int *px=&x;
 int*py=&y;
 int toplam,carpim,cikarim,bolum;
 topla(x,y,&toplam,&carpim,&cikarim,&bolum);

    return 0;
}
int topla(int a,int b,int *top,int *crp,int *ckr,int *bol)
{
    *top=a+b;
    *crp=a*b;
    *ckr=a-b;
    *bol=a/b;
    printf("%d %d %d %d ",*top,*crp,*ckr,*bol);
}
