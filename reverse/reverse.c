#include <stdio.h>
int main()
{
    int n,i,sign=-1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("%d",i);
        if(sign==1){
            printf("+");
        }else{
            printf("-");
        }
        sign*=-1;
    }
    printf("%d\n",n);
    return 0;
}