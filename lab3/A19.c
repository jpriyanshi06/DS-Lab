//19. Write a program to find position of the smallest number & the largest number from given n numbers.

#include<stdio.h>
void main(){
    int n;
    printf("enter num : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("enter element :  ");
        scanf("%d",&a[i]);
    }

    int smallest=a[0],largest=a[0],smallpos=1,largestpos=1;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
            smallpos=i+1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
            largestpos=i+1;
        }
    }
    printf("smallest position = %d",smallpos);
    printf("largest position = %d",largestpos);
}