//29. Write a program to merge two unsorted arrays.

#include<stdio.h>
void main(){
    int x,y;

    printf("enter array 1 size : ");
    scanf("%d",&x);

    printf("enter array 2 size : ");
    scanf("%d",&y);
    int a[x],b[y],c[x+y];

    for(int i=0;i<x;i++){
        printf("enter array 1 ele : ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<y;i++){
        printf("enter array 2 ele : ");
        scanf("%d",&b[i]);
    }

    for(int i=0;i<x;i++){
        c[i]=a[i];
    }
     for(int i=0;i<y;i++){
        c[x+i]=b[i];
    }

    printf("\n");
    for(int i=0;i<x+y;i++){
        printf("%d ",c[i]);
    }

}