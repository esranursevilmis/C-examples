#include <stdio.h>
#include <stdlib.h>

int main()
{  int dizi1[20];
int sum=0;
    dizi1[0]=1;
    dizi1[1]=2;
    for(int i=2;i<20;i++){
        dizi1[i]=dizi1[i-1]+dizi1[i-2];
    }
    for(int i=0;i<20;i++){
        printf("%d ",dizi1[i]);
        if(i==0){
            continue;
        }
        if(i%10==0){
            printf("\n");
        }
     if(dizi1[i]%2==0)
		sum=sum+dizi1[i];

    }
    printf("DIZIDEKI CIFT SAYILARIN TOPLAMI\n%d",sum);
    return 0;
    }
