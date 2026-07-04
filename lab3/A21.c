//21. Read n numbers in an array then read two different numbers, replace 
//    1st number with 2nd number in an array and print its index and final array.

#include<stdio.h>
void main(){
    int n,x,y;
    printf("enter num : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("enter element :  ");
        scanf("%d",&a[i]);
    }

    printf("enter which num you want to replace & you want to write : ");
    scanf("%d",&x);
    scanf("%d",&y);

    for(int i=0;i<n;i++){
        if(a[i]==x){
            a[i]=y;
        printf("replace number index = %d ",i);
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}