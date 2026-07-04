//convert days into y,w,d
#include<stdio.h>
void main(){
    int days,year,week;
    printf("enter days :");
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;
    printf("%d:%d:%d",year,week,days);
}