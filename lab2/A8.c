//WAP to find factorial of a number. (Using loop & recursion)
#include<stdio.h>
void main(){
    int n,ans=1;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        ans=ans*i;
    }
    printf("factorial = %d",ans);
}
