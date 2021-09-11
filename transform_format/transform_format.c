#include<stdio.h>
int main()
{
    int character;
    scanf("%d",&character);

    printf("%o\n",character);
    printf("%X\n",character);
    character%=26;
    character+=97;
    printf("%c\n",character);
    return 0;
}