//26. Write a program to insert a number in an array that is already sorted in an 
//ascending order.

#include <stdio.h>
void main(){
    int a[100], n, pos, num,temp,x,temp1=0,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
             temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("which ele you want to sort : ");
    scanf("%d",&x);

   for(i=n-1;i>=0 && a[i]>x;i--){
        a[i+1]=a[i];
   }
   a[i+1]=x;
   n++;

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}