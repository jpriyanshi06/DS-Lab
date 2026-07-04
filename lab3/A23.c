//23. WAP to sort the N names in an alphabetical order.

#include<stdio.h>
#include<string.h>
void main(){
    int n;
    printf("enter num : ");
    scanf("%d",&n);
    char a[50][50],temp[50];

    for(int i=0;i<n;i++){
        printf("enter name : ");
        scanf("%s",a[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
}