//WAP to find power of a number using loop.
#include<stdio.h>
void main(){
    int x,y,ans=1;
    printf("enter base and power : ");
    scanf("%d",&x);
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        ans=ans*x;
    }
    printf("power of number = %d",ans);
}
