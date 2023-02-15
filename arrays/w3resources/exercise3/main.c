#include <stdio.h>
#include <stdlib.h>

int main()
{  int k;
    printf("dizinin eleman sayisi: ");
   scanf("%d",&k);
   int a[k],toplam;
   for(int i=0;i<k;i++){
    printf("%d. elaman: ",i+1);
    scanf("%d",&a[i]);
    toplam+=a[i];
   }
    printf("elemanlarin toplami:%d",toplam);
    return 0;
}
