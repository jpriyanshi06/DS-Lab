//. WAP to print prime numbers between given interval.
#include<stdio.h>
void main(){
    int x,y;
    printf("enter range : ");
    scanf("%d",&x);
    scanf("%d",&y);
    for(int i=x;i<y;i++){
        int ans=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                ans++;
            }
        }
        if(ans==2){
            printf("range %d,",i);
        }
    }
}