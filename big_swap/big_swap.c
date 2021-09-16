#include<stdio.h>
void Swap(int Array[], int m, int n);

int main()
{
    int m,n;
    int i;
    scanf("%d%d",&m,&n);
    int nums[m+n];
    for(i=0;i<(m+n);i++){
        scanf("%d",&nums[i]);
    }
    Swap(nums,m,n);
    for(i=0;i<(m+n);i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    return 0;
}

void Swap(int Array[], int m, int n)
{
  	int temp;
  	int i,j;
  	for(i=0;i<m;i++){
        temp=Array[0];
        for(j=0;j<(m+n);j++){
            Array[j]=Array[j+1];
        }
        Array[m+n-1]=temp;
        // for(i=0;i<(m+n);i++){
        //     printf("%d ",Array[i]);
        // }
        // printf("\n");
    }  
  	return;
}