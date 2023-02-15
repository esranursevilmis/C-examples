#include <stdio.h>
#include <stdlib.h>

void karesini_al(int* x);
int main()
{
  int x=10;
  int *xptr;
  xptr=&x;
//PASS BY VALUE AND PASS BY REFERENCE
  /*printf("degisiklik yapmadan once x in adresi: %p\n",xptr);
  //scanf("%d\n",&x);//pass by reference
  //printf("deger okuduktan sonra x: %d\n",*xptr);
  karesini_al(xptr); //referans yolladik
  //karesini_al(x); //deger yolladik

  printf("degiislik yaptiktan sonra x in adresi: %p\n ",xptr);
  printf("%d",x);*/


/*  char d[500];
  char *pd=d;//& koyulmamasýnýn sebebi dizinin aslinda bir pointer olmasi.
  scanf("%s",d);
  printf("%d\n",d);//adres
  printf("%c\n",*d);//deger
  printf("%d\n",pd);//adres
  printf("%c\n",*pd);//string ifadenin ilk elemanina erisir.deger*/



    return 0;
}
void karesini_al(int* x)
{
    (*x) = (*x) * (*x);
}
