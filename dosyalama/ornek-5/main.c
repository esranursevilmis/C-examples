#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fptr;
    fptr=fopen("dosya.txt","w");
    if(fptr==NULL){
        printf("dosya acilamadi...");
        exit(1);}
    else{
    for(int i=0;i<10;i++){
        fputc(97,fptr);
    }
}
    fclose(fptr);

    fptr=fopen("dosya.txt","r");
     if(fptr==NULL){
        printf("dosya acilamadi...");
        exit(1);}
    else{
    for(int i=0;i<10;i++){
        printf("%c ",fgetc(fptr));
    }
}
    fclose(fptr);
    return 0;
}
