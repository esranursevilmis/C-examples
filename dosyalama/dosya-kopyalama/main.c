#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp_kaynak,*fp_hedef;
  fp_kaynak=fopen("string.txt","r");
  if(fp_kaynak==NULL){
    printf("dosya acilamadi!");
    exit(1);
  }
  else{ //kopyalanacak dosya acilir.
    fp_hedef=fopen("string_kopya.txt","w");
    if(fp_hedef==NULL){
    printf("dosya acilamadi!");
    exit(1);
  }
  else{
        char temp;
    while(!feof(fp_kaynak)){ //dosyanin sonuna gelmiyorsak devam.
        temp=fgetc(fp_kaynak);
        if(temp!=EOF) //icerde de bir daha sormamiz lazim.
        fputc(temp,fp_hedef);
        else
            break;
    }

  }
  fclose(fp_hedef);
  }
  fclose(fp_kaynak);
    return 0;
}
