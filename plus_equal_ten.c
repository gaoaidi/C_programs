#include <stdio.h>

int main()
{
    int num;
    int a,b,c;
    int signal=0;
    int regist=0;
    scanf("%d",&num);
    for(int i=num;i<1000;i++){
        int temp=i;
        a=temp%10;
        temp/=10;
        b=temp%10;
        temp/=10;
        c=temp;
        if((a+b+c)==10){
            printf("%d ",i);
            signal++;
            regist=1;
            }
        if(signal==10){
            printf("\n");
            signal=0;
        }
    }
    if(regist)
        printf("\n");
    if(regist==0){
        printf("null\n");
    }
    return 0;
}