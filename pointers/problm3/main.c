#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi1=1.2,sayi2;
    double *agos1,*agos2;
    agos1=&sayi1;
    agos2=&sayi2;
    printf("%lf\n",*agos1);
    scanf("%lf",agos2);
    printf("sayi1 : %lf\n",*agos1);
    printf("sayi2 : %lf\n",*agos2);
    agos1=agos2;;
    printf("sayi1 nin adresi: %p\n",&sayi1);
    printf("sayi2 nin adresi: %p\n",&sayi2);
    printf("agos1 nin tuttugu adres: %p\n",agos1);
    printf("agos2 nin tuttugu adres: %p\n",agos2);

    return 0;
}
