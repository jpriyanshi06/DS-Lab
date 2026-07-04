//leap year or not
#include<stdio.h>
void main(){
    int n;
    printf("enter year :");
    scanf("%d",&n);
    if(n%4==0&&n%100!=0||n%400==0){
        printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }
}