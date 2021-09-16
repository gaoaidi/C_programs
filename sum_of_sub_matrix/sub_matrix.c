#include<stdio.h>
int main()
{
    int m,n;
    int i,j,k;
    int sum;
    int pn;
    scanf("%d%d",&m,&n);
    int nums[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&nums[i][j]);
        }
    }
    scanf("%d",&pn);
    int ps[pn][4];
    for(i=0;i<pn;i++){
        for(j=0;j<4;j++){
            scanf("%d",&ps[i][j]);
        }
        }
    for(i=0;i<pn;i++){
        sum=0;
        for(j=ps[i][0];j<=ps[i][2];j++){
            for(k=ps[i][1];k<=ps[i][3];k++){
                sum+=nums[j][k];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}