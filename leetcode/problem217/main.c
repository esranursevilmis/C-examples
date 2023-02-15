#include <stdio.h>
#include <stdlib.h>
void containsDuplicate(){

    int nums[]={1,3,4,6,2,8,0,1};
    int sayac=0;

    for(int i=0;i<20;i++) {
        for(int j=1;j<20;j++){
          if(nums[i]==nums[j]){
              sayac++;
}
}
}
while(sayac!=0){
    printf("true");
    break;
}

}
int main()
{
    containsDuplicate();
    return 0;
}
