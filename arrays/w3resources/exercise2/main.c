#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    printf("dizi elaman sayisini girn: ");
    scanf("%d",&k);
    int a[k];
    for(int i=0;i<k;i++){
    printf("%d.elemani girin: ",i+1);
    scanf("%d",&a[i]);
}
printf("dizinin ilk hali: \n");
  for(int i=0;i<k;i++){
    printf("%d ",a[i]);
}
int reverse=0;
int i=0;
int m=k-1;
while(i<k/2){
   //reverse=reverse*10+a[i];
   int temp=a[i];
   a[i]=a[m];
   a[m]=temp;
   i++;
   m--;


    }


puts(" ");
printf("dizinin son hali: \n");
  for(int i=0;i<k;i++){
    printf("%d ",a[i]);
}

return 0;

}
