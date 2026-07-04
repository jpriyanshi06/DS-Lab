//31. Read two 2x2 matrices and perform addition of matrices into third matrix and 
//print it

#include<stdio.h>
int main(){
    int a[2][2],b[2][2],c[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter array ele of a :");
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             printf("enter array ele of b :");
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}