#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nums[10];
   int expectedNums[10];

   for(int i=0;i<10;i++){
    scanf("%d",&nums[i]);
    printf("%d ",nums[i]);
   }
   puts("");

 for(int i=0;i<10;i++){
   for(int j=1;j<10;j++){
        if(nums[i]==nums[j]){
        nums[j]=0;
        }
 }
expectedNums[i]=nums[i];
 }
for(int i=0;i<10;i++){
    printf("%d ",expectedNums[i]);}




    return 0;
}
