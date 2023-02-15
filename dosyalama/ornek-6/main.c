#include <stdio.h>
#include <stdlib.h>

int main(){
    char dizi[51];
    FILE *fp;
    char *cp;
    printf("metin giriniz: ");
    gets(dizi);
 //BIR DIZININ ELEMAN SAYISINI BILMESEK BILE ONU BIR DOSYAYA YAZABILIRIIZ.
    fp=fopen("string.txt","w");
    if(fp==NULL){
        printf("dosya acilamadi...");
        exit(1);
    }
    cp=dizi;
    while(*cp){ //burda okunan terminating olmadigi surece yani NULL YANÝ SIFIR while 0 olmadigi surece 1 olarak algilanir.TERMINATING GORUNCE BITER.
        if(fputc(*cp,fp)==EOF ){ //dosyanin sonuna gelirse bitecek/terminating /
            printf("dosya yazilamadi!!");
            exit(1);
        }
        cp++;//pointer bi sonraki indiste(pointer aritmetigi)
    }
    fclose(fp);

    fp=fopen("string.txt","r");
    if(fp==NULL){
        printf("dosya acilamadi...");
        exit(1);
    }
    for( ; ; ){
        int i=fgetc(fp); //eger alinan karakter 0 degilse devam.
        if(i==EOF)
            break;
        putchar(i);
    }

    return 0;
}
