//36. WAP to calculate the sum of n numbers using Pointer

#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,sum=0,arr[100],*p;

    printf("enter arr size : ");
    scanf("%d",&n);
    
    p=arr;

    printf("enter arr element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        //scanf("%d",(arr+i));
        //scanf("%d",&*(arr+i));
    }

    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    printf("sum = %d",sum);

}