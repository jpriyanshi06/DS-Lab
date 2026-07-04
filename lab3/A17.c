//17. Write a program to calculate sum of numbers from m to n.
#include<stdio.h>
void main(){
    int n,m,sum=0;
    printf("enter m,n : ");
    scanf("%d",&m);
    scanf("%d",&n);
    int a[n-m+1];
    for(int i=m;i<=n;i++){
        sum=sum+i;
    }
    printf("sum = %d",sum);
}