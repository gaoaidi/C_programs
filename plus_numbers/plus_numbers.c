#include <stdio.h>
int main()
{
    int num;
    double sum=0;
    int i;
    int sign=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=1./i*sign;
        sign=-sign;
    }
    printf("%.4g\n",sum);
    return 0;
}