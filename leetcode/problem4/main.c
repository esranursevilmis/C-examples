#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,j,min,k=0;
    double medyan;
    int nums1[]={5,12,13};
    int nums2[]={8,15,17};
    int last[10];
    for(i=0;i<3;i++){
        for(j=k;j<3;j++){
            if(nums1[i]<nums2[j]){
                min=nums1[i];
                nums1[i]=NULL;}

          else if(nums1[i]>nums2[j]){
                min=nums2[j];
                nums2[j]=NULL;}



        }

      last[i]=min;
    }
    for(int i=0;i<3;i++){
       printf("%d ",last[i]);
    }
    return 0;
}

