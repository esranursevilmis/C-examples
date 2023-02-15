#include <stdio.h>
#include <stdlib.h>
//MATRISTE SUTUNLARDAKI ELEMANLARIN TOPLAMINI VEREN PRGRM
void sumColumn(int a[3][4])
{
    int toplam=0;
    for(int i=0;i<4;i++){ //toplama islemi kac defa olacak,dýs dongude sutun.
        for(int j=0;j<3;j++){//her islemin oldugu yerler satirlar ic dongu satir.
        toplam+=a[j][i];
    }
    printf("%d. sutunun elemanlari toplami: %d\n\n",i+1,toplam);
    toplam=0;//her iterasyonda sifirla.
   }
}

int main()
{
     int arr[3][4]={0};
    printf("Matrisi doldurun:\n"); //satir boyu
     for(int satir=0;satir<3;satir++){
         for(int sutun=0;sutun<4;sutun++){
            scanf("%d",&arr[satir][sutun]);
            }

       }
for(int satir=0;satir<3;satir++){
   for(int sutun=0;sutun<4;sutun++){
    printf("%d ",arr[satir][sutun]);

   }
   puts("");
}
puts("");
sumColumn(arr);

    return 0;
}
