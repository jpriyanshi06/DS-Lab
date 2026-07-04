//38. WAP to sort the array elements using Pointer.

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
    }

    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(*(p+i)>*(p+j)){
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
           }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}