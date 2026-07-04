//32. Read two matrices, first 3x2 and second 2x3, perform multiplication operation 
//and store result in third matrix and print it.
#include<stdio.h>
int main(){
    int a[3][2],b[2][3],c[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("enter array ele of a :");
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
             printf("enter array ele of b :");
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            for(int k=0;k<2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             printf("%d ",c[i][j]);
        }
         printf("\n");
    }
    
}

