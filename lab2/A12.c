//WAP to check whether a number is prime or not.
#include<stdio.h>
void main(){
    int n,ans=0;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
           ans++;
        }
    }
    if(ans!=0){
        printf("not prime");
    }
    else{
        printf("prime");
    }
}