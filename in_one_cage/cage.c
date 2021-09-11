#include <stdio.h>
int main()
{
    int m,n;
    int c,r;
    scanf("%d%d",&n,&m);
    r=(m-2*n)/2;
    c=n-r;
    if((4*r+2*c)==m&&r>=0&&c>=0){
        printf("%d %d\n",c,r);   
    }else{
        printf("No answer\n");
    }
    return 0;
}