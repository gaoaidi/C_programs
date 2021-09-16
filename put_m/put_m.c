#include<stdio.h>
int main()
{
    char str1[20],str2[39];
    char *p1,*p2;
    p1=str1;
    p2=str2;
    scanf("%s",str1);
    while(*p1!='\0'){
        *p2=*p1;
        p2++;
        *p2='m';
        p1++;
        p2++;
    }
    p2--;
    *p2='\0';

    printf("%s\n",str2);
    return 0;
}