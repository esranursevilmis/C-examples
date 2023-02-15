#include <stdio.h>
#include <stdlib.h>
int ebob(int a,int b);

int main()
{ int x=21;
  int y=28;

 printf("ebob: %d",ebob(x,y));
    return 0;
}
int ebob(int a,int b)
{
      if(a==0)
     return b;
   else if(b==0)
    return a;
   else
     return ebob(b,a%b);

return 1;
}
