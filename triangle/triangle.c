#include<stdio.h>
#include<math.h>

int main()
{
    double tri[3];
    int a,b;
    double cos_answer;
    double answer;

    for(int i=0;i<3;i++){
        scanf("%lf",&tri[i]);
    }
    scanf("%d%d",&a,&b);
    if(a<4&&b<4){
        cos_answer=(tri[a-1]*tri[a-1]+tri[b-1]*tri[b-1]-tri[6-a-b-1]*tri[6-a-b-1])/(2*tri[a-1]*tri[b-1]);
        answer=acos(cos_answer);
        answer=answer/3.1415926*180;
        // printf("%.4f\n",cos_answer);
        printf("%.6g\n",answer);
    }else{
        printf("Error!\n");
    }
}