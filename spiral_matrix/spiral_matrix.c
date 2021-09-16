#include<stdio.h>
int main()
{
    int m,n;
    int c=0,i,j;
    int *p[m];
    scanf("%d%d",&m,&n);
    int nums[m][n];
    int max=m*n;
    for(i=0;i<m;i++){
        p[i]=nums[i];
    }
    i=1;
    *(p[0]+n-1)=i;
    i++;
    while(m>0||n>0){
        if(n>0){
            for(j=n-1;j>=0;j--){
            *(p[c]+j)=i;
            i++;
            }
            c++;
        }
    }

}