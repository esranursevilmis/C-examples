#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fp;
    fp=fopen("karakter.txt","w");
    if(fp==NULL){
        printf("dosya acilamadi..");
        exit(1);}
    else
        fputc(65,fp); //ilk parametre ister int ister char olsun fputc girilen ifadeyi ascii ye göre yazar.
    fclose(fp);

    fp=fopen("karakter.txt","r");
    if(fp==NULL){
        printf("dosya acilamadi..");
        exit(1);}
    else{
        char okunan;
        okunan=fgetc(fp);
        if(okunan==EOF)  //nadir karsilasilir ama yazmakta fayda var.
            printf("karakter okunamadi..");
        else
            printf("okunan karakter: %c",okunan);
    }
        fclose(fp);

    return 0;
}
