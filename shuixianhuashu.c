#include <stdio.h>
int main()
{
	int a,b,sum;
	for(int i=100;i<1000;i++){	//三位数范围为100至999
		a=i;	//将i赋给a，因为之后要对此数进行运算
		sum=0;
		while(a!=0){	//当a不等于0
			b=a%10;	//分离a的最后一位数
			a/=10;	//除去a的最后一位数
			sum+=b*b*b;	//每位数的三次方相加
		}
		if(sum==i){	//如果每位数的三次方相加与原数相等，输出此数
			printf("%d\n", i);
		}
	}
	return 0;
}