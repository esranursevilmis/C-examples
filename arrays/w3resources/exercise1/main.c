#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[20];
   a[0]=1;

   for(int i=1;i<20;i++){
    a[i]=a[i-1]+1;
   }
   printf("dizi elemanlari:\n");
   for(int i=0;i<20;i++){
    printf("%d ",a[i]);
   }
    return 0;
}
