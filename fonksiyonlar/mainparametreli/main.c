#include <stdio.h>
#include <stdlib.h>

void main(int x, char *y[])
{
    if(x==4){
        float a,b,sonuc=0.0;
        a=atof(y[1]);
        b=atof(y[3]);

        char islem=y[2][0];

        sonuc=(islem=='+')?a+b: (islem=='-')? a-b: (islem=='x')? a*b: (islem=='/')? a/b: printf("Hatali operator");
        printf("\nSonuc: %f",sonuc);
    }
    else
        printf("Hatali sayida parametre!");

}

/*int main(int x, char *y[]) {

    int toplam;
  if(x<3){
    printf("eksik sayýda parametre.");
   exit(1);
    }
  if(x>3){
    printf("fazla sayýda parametre.");
    exit(1);
  }
toplam=atoi(y[1])+atoi(y[2]);
  printf("toplam:%d",toplam);
  return 0;
}
*/
