#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int nums[num],good_number,n;
    int i,j;
    int sign=1;
    for(i=0;i<num;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<num;i++){
        sign=1;
        for(j=1;j<10;j++){
            good_number=nums[i]*nums[i]*j;
            if(nums[i]>=100&&good_number%1000==nums[i]){
                printf("%d %d\n",j,good_number);
                sign=0;
                break;
            }else if(nums[i]>=10&&good_number%100==nums[i]){
                printf("%d %d\n",j,good_number);
                sign=0;
                break;
            }else if(nums[i]<10&&good_number%10==nums[i]){
                printf("%d %d\n",j,good_number);
                sign=0;
                break;
            }
        }
        if(sign){
            printf("No\n");
        }
    }
    return 0;
}