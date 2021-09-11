#include <stdio.h>
int main()
{
    int year,month,day;
    int added_days;
    int months[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d:%d:%d",&year,&month,&day);
    scanf("%d",&added_days);
    if((year%4==0)||(year%100==0&&year%400==0)||(year%3200==0)){
        day+=added_days;
        while(day>months[month]){
            month+=1;
            day=day-months[month];
        }
        if(month<10){
            putchar('0');
        }
        printf("%d\\",month);
        if(day<10){
            putchar('0');
        }
        printf("%d\n",day);
    }else{
        printf("Error!\n");
    }
    return 0;
}