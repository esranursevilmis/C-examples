#include <stdio.h>
#include <stdlib.h>

int main()
{
    int target;
    int a,b;
    int nums[5];

    for(int i=0;i<5;i++)
    {
         printf("Input %d. element of your array: ",i+1);
         scanf("%d",&nums[i]);

    }
   for(int i=0;i<5;i++)
   {
       printf("%d ",nums[i]);
   }
   puts("");
   printf("Input your target: \n");
   scanf("%d",&target);
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
       int sonuc=nums[i]+nums[j];
       if(sonuc==target){
       target=sonuc;
       a=i;
       b=j;
}
     else
        continue;

   }
  //BİRDEN FAZLA SAĞLAMA DURUMU VARSA NASIL YAPILIR?
  //SAĞLANAMAZSA NE OLUR?
}
printf("Target:%d index %d and %d that ensured it.",target,a,b);

  return 1;
}
