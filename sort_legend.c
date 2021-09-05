#include<stdio.h>
int main()
{
    int num;
    int i,j;
    int max,max_n,temp;
    int *p=NULL;
    int point;

    scanf("%d",&num);

    int nums[num];
    p=nums;

    for(i=0;i<num;i++){
        scanf("%d",p+i);
    }

    for(i=num;i>0;i--){
        max=nums[i-1];
        max_n=i-1;
        for(j=0;j<i;j++){
            if(nums[j]>max){
                max=nums[j];
                max_n=j;
            }
        }
        temp=nums[i-1];
        nums[i-1]=nums[max_n];
        nums[max_n]=temp;
    }
    p=nums;
    for(i=0;i<5;i++){
        scanf("%d",&point);
        printf("%d ",nums[point-1]);
    }
    printf("\n");
    return 0;
}
