#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int ebob;
    printf("bir sayi giriniz: ");
    scanf("%d",&x);

    for(int i=2;i<x;i++){
        if(x%i==0){
            ebob=i;
        }

    }
    printf("%d girilen sayinin en buyuk ortak kati.",ebob);
    return 0;
}
