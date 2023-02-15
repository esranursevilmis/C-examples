#include <stdio.h>
#include <stdlib.h>

int main()
{  int not[10][3];
   //not[1][1]=90;
  // scanf("%d",&not[9][0]);
   int i,j,toplam;
   double orta;
   for(i=0;i<10;i++){
        printf("%d. ogrencinin notlari: ",i+1);
    for(j=0;j<3;j++){
        scanf("%d",&not[i][j]);
    }
   }
   for(j=0;j<3;j++){
    toplam=0;
    for(i=0;i<10;i++){
        toplam+=not[i][j];
        orta=toplam/10.0;
    }
   printf("%d. sinav ortalamasi: %5.2f\n",j+1,orta);
   }




    return 0;
}
