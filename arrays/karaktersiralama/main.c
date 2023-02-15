#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sirasiz[10][51];
   char sirali[10][51];

   printf("10 tane kelime girin: \n");
   for(int i=0;i<10;i++)
    gets(sirasiz[i]);

   printf("Kelimelerin alfabetik hali: \n");
   int enkucukindis;
   char enkucukkelime[51];
   enkucukkelime[50]='\0';

   for(int i=0;i<10;i++){
        enkucukindis=-1;
   for(int k=0;k<10;k++){
      enkucukkelime[k]='{';
    }
    for(int j=0;j<10;j++){
      //sirasiz[j] ile enkucukkelime kiyaslanacak
      if(strcmp(sirasiz[j],enkucukkelime)<0){
         strcpy(enkucukkelime,sirasiz[j]);
         enkucukindis=j;
      }
    }
    for(int k=0;k<10;k++){
    sirasiz[enkucukindis][k]='{';
    strcpy(sirali[i],enkucukkelime);
   }
   }

   for(int i=0;i<10;i++){
    puts(sirali[i]);
   }


    return 0;
}
