#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=4;
    int* aptr; //* sembolu tanimlanan degiskenin pointer oldugunu anlamamýzý saglar.
    aptr=&a;   //& adres operatorudur.&x x in adresi anlamina gelir.xptr degiskenine x in adresini atadik.
    *aptr=6;   //* sembolu pointer tanimlama disindaki baska bir gorevi de xptr nin gosterdigi hucrenin icerigine ulasir.
                 // ayni bellek hucresine hem x hem de *xptr ifadesiyle ulasabiliriz.
    printf("%d\n",a); //icerik
    printf("%d\n",&a); //adres( 10 luk tabanda gosteriliyor )
    printf("%d\n",aptr); //adres
    printf("%d\n",*aptr); //icerik

    printf("Gostergenin icindeki adres: %p\n",aptr); //bir gostergedeki adresi yazdirma.16 lik
    printf("Gostergenin gosterdigi hucrenin icerigi=%d\n",*aptr);
    scanf("%d",aptr);//aptr gostergesinin gosterdigi hucreye deger okuma.
    printf("Deger okunduktan sonra hucrenin icerigi: %d\n",*aptr);

    int *px,*py;
    int x=3,y=4;
    px=&x;
    py=&y;
    py=px;   // bu satirdaki islem px in icindeki adresi py ye kopyalar ve artýk ikisi de x i gosterir.
    *py=5;   // bu komut y yi degil x i degistir.

    printf("*************\n%d",*px);

    int k=123;
     scanf("%d",&k);
    printf("%d\n",k);


    return 0;
}
