#include <stdio.h>
#include <stdlib.h>

int main()
{   //SORU: a artýk 3 b ise 4 olsun.
    int a=4,b=3;
    int temp;
    int *p1,*p2;
    p1=&b;
    p2=&b;
    printf("%d %d\n",*p1,*p2);

    temp=a;
    a=*p2;
    b=temp;
    p1=&a;
    printf("%d %d",*p1,*p2);



    return 0;
}
