//20. Write a program to find whether the array contains a duplicate number or not

#include<stdio.h>
void main(){
    int n,temp=0,c=0;
    printf("enter num : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("enter element :  ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

        for(int j=0;j<n-1;j++){
            if(a[j]==a[j+1]){
                c++;
            }
        }
        
        if(c!=0){
            printf("array contains duplicate number");
        }
        else{
            printf("array not contain duplicate number");
        }

    }