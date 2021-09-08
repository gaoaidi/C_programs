#include <stdio.h>

int main()
{
    int a=1,b=2;
    int c,temp,num;
    printf("Pleace input a number: ");
    scanf("%d",&c);
    if(c==0){
        printf("0\n");
    }else if(c==1){
        printf("%d\n",a);
    }else if(c==2){
        printf("%d\n",b);
    }else{
        for(int i=0;i<c-2;i++){
            temp=b;
            b=a+b;
            a=temp;
            num=b;
        }
        printf("%d\n",num);
    }
    return 0;

}