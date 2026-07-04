//27. Write a program to delete a number from an array that is already sorted in an 
//ascending order.

#include <stdio.h>
void main(){
    int a[100], n, num, i, pos = -1;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to delete: ");
    scanf("%d",&num);
    for(i=0; i<n; i++){
        if(a[i] == num){
            pos = i;
            break;
        }
    }
    if(pos != -1){
        for(i=pos; i<n-1; i++){
            a[i] = a[i+1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i=0; i<n; i++){
            printf("%d ",a[i]);
        }
    }
    else{
        printf("Number not found");
    }
}