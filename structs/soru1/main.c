#include <stdio.h>
#include <stdlib.h>

int main()
{ struct noktalar
{
   int x,y;
};
   int mesafe;
   struct noktalar n1,n2;

    printf("1.noktanin x ve y koordinatlarini giriniz: ");
    scanf("%d %d",&n1.x,&n1.y);
    printf("2.noktanin x ve y koordinatlarini giriniz: ");
    scanf("%d %d",&n2.x,&n2.y);

    mesafe =sqrt(pow((n1.x-n2.x),2)+pow((n1.y-n2.y),2));
    printf("Iki nokta arasi uzaklik:%d",mesafe);
    return 0;
}
