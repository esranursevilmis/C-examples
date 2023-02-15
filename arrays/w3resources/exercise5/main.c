#include <stdio.h>
#include <stdlib.h>
int main()
{
  /*  //TEKRAR EDEN ELEMANLARİ YAZDİRMA
    int n;
    printf("Dizi elaman sayisi: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d.elamani girin: ",i+1);
        scanf("%d",&arr[i]);
    }

    int i,j,k; //degiskenler tanimlandi.

    for(i=0;i<n;i++){ // arr dizisinin eleman sayýsý 6 oldugu icin 6 defa tekrarlanacak bir dizi yazýlýdý.
        for(j=i+1;j<n;j++){ // arr dizisindeki elemanlarla karsýlastýrmak icin bir dizi daha. j=i+1 cunku o degerden sonraki degerlerle karsilastirma yapabilmek icin.
            if(arr[i]==arr[j]){
                arr[j]="*"; // ayni degerden bulunduysa o degeri * karakteri ile degistirip sayi olarak gorulmesi engellendi.
            }
        }
    }

    for(k=0;k<n;k++){
        if(arr[k]!="*"){ // ustteki dongulerde bir degeri '*' ile degistirdiysek onun ekrana yazdirilmemesi icin
            printf("%d ",arr[k]); // diger ifadeler yazdirilir.
        }
    }*/



    //TEKRAR EDEN FAZLALİK ELEMANLARİ YAZDİRMAMA
    int m;
    printf("Dizi elaman sayisi: ");
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++){
        printf("%d.elamani girin: ",i+1);
        scanf("%d",&a[i]);
    }

   int i,j;
   for( i=0;i<m;i++){
    for( j=0;j<m;j++){
        if(a[i]==a[j])
            break;
        }
   if(i==j)
    printf("%d ",a[i]);

    }

    return 0;

}


