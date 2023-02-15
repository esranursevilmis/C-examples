#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,temp;
    printf("bir tamsayi girin: ");
    scanf("%d",&m);
    int dizi[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            temp=dizi[i];
            dizi[i+1]=dizi[i];
            dizi[i+1]=temp;
        }
    }




    return 0;
}
