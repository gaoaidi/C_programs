#include <stdio.h>
int main()
{
    char a,b;
    int num;
    scanf("%c %c",&a,&b);
    if(a>47&&a<58&&b>47&&b<58){
        a-=48;
        b-=48;
        num=a+b;
        printf("%d\n",num);
    }
    else{
        printf("Error!\n");
    }
}