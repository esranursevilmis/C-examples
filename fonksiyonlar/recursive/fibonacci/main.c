#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;//4 elemanlý seri
    printf("fibonacci eleman: %d ",fib(x));//x e hangi deger verilirse serideki o elamani gosteren fonksiyon cagrilir.
    return 0;
}

int fib(int n) //n serideki eleman sayisi parametre olarak alinir.
{   //base conditions
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2); //general condition
}
