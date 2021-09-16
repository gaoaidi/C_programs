#include<stdio.h>
int main()
{
    int nums[4],times=0;
    int i;
    for(i=0;i<4;i++){
        scanf("%d",&nums[i]); 
    }
    for(i=0;i<4;i++){
        times=0;
        while(nums[i]!=1){
            if(nums[i]%2==0){
                nums[i]/=2;
            }else{
                nums[i]=(nums[i]*3+1)/2;
            }
            times++;
        }
        printf("%d\n",times);
    }
    return 0;
}