//37. WAP to find the largest element in the array using Pointer.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,arr[100],*p;

    printf("enter arr size : ");
    scanf("%d",&n);
    
    p=arr;

    printf("enter arr element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];

    for(int i=0;i<n;i++){
        if(*(p+i)>largest){
            largest = *(p+i);
        }
    }
    printf("largest num = %d",largest);

}