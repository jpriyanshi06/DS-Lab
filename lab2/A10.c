// WAP to reverse a number.
#include<stdio.h>
void main(){
    int n,ans=0,rem=0;
    printf("enter number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    printf("%d",ans);
    
}