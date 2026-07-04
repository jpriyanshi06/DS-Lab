//35. WAP to get and print the array elements using Pointer

#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,*p,arr[100];

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
        printf("arr[%d] = %d\n",i,*(p+i));
        //printf("%d",*(arr+i));
    }

}