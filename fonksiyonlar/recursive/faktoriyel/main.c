#include <stdio.h>
#include <stdlib.h>
int fact(int x);

int main()
{   int sayi=0;
    printf("faktoriyel: %d",fact(sayi));

    return 0;
}

int fact(int x)
{   while(x>=0)
     if(x<=1)  //recursive yazarken base condition unutulmamalý.
        return 1;
     else
       return x*fact(x-1); //fonksiyon tekrar kendini cagiriyor.


}
