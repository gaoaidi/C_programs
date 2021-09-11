#include <stdio.h>
int main()
{
    int nums[20],f;
    int i,end=0,n;
    int max=20,min=0;
    for(i=0;i<20;i++){
        scanf("%d",&nums[i]);
        if(nums[i]==-1){
            max=i;
            break;
        }
    }
    scanf("%d",&f);
    n=(min+max)/2;
    while(end!=1){
        if(f>nums[n]){
            min=n;
            n=(max+n)/2;
        }else if(f<nums[n]){
            max=n;
            n=(min+n)/2;
        }else{
            end=1;
            printf("%d\n",n);
        }
    }
    // for(i=0;i<20;i++){
    //     printf("%d ",nums[i]);
    // }
    // printf("/n");
    return 0;
}