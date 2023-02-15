#include <stdio.h>
#include <stdlib.h>

void ters(char* ptr)
{  if(*ptr!=NULL){ //pointer null ý gostermedigi surece kosul belirttik.
    ters(ptr+1);//fonksiyon kendisini cagirarak string ifadeyi okur.
    printf("%c",*ptr);//sona gelinince ise tersten yazdirir.
}
}

int main()
{
 char isim[]="esranur";
 char *isimptr=isim;
  ters(isimptr);

    return 0;
}

