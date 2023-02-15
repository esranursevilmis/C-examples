#include <stdio.h>
#include <stdlib.h>

 int isPowerofTwo(int n,int c){

    if(n<=0)
      return -1;
    else if(n==1)
    return 0;
    else if(n%2==1)
     return -1;
    else{
        c++;
        return c+isPowerofTwo(n/2,c-1);}
    }

int main()
{  int sayi;
   int count=0;
   int us;
    printf("sayi: ");
    scanf("%d",&sayi);
    printf("%d",sayi);
   us=isPowerofTwo(sayi,count);
   printf("\ngirdiginiz sayi 2 nin %d. ussu.",us);
    return 0;
}
