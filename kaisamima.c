#include<stdio.h>

int main()
{
    char c[100];
    char *p;
    int num;
    p=&c[0];
    while((*p=getchar())!=' '){
        p++;
    }
    scanf("%d",&num);
    p=&c[0];
    while(*p!=' '){
        *p+=num;
        if(*p>'z'){
            *p-=26;
        }
        p++;
    }
    *p=0;
    printf("%s\n",c);
    return 0;
}