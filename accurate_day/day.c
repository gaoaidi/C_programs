#include<stdio.h>
int main()
{
    int h,m,s;
    int time,mytime;
    double accurate_time;
    scanf("%d:%d:%d",&h,&m,&s);
    time=24*60*60;
    mytime=60*60*h+60*m+s;
    accurate_time=mytime*1./time;
    printf("%.5f\n",accurate_time);
    return 0;
}