#include <stdio.h>
#include <stdlib.h>
//ICI BOS PARALELKENAR 
int main()
{
    {
    int row=5;
    int column=10;
    int i,j,k;
    for(i=1;i<=row;i++){

        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(k=1;k<=column;k++){
            if((k==1)||(k==column)||(j==1)||(j==row))
            printf("*");
        else
            printf(" ");

        }
        printf("\n");

}

    return 0;
}
    return 0;
}
