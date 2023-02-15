#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char d[100];
    srand(time(NULL));
    for(int i=0;i<100;i++){
        d[i]=(char)(97+rand()%(122-96));
    }
    for(int i=1;i<101;i++){
        printf("%c ",d[i-1]);
        if(i%20==0)
            puts(" ");
    }
    int tablo[26][2]={0};

    int harf='a';
    for(int i=0;i<26;i++){
        for(int j=0;j<100;j++){
          tablo[i][0]=(char)harf;
          if(d[j]==(char)harf)
                tablo[i][1]++;
            }
      harf++;
    }
    printf("\nHARF ADET\n");
    for(int i=0;i<26;i++){
        printf("%c    %d",tablo[i][0],tablo[i][1]);
        puts("");
    }
    return 0;
}
