//16. Write a program to read and display n numbers using an array.

#include<stdio.h>
void main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
         printf("enter arr ele  : ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}