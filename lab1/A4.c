//largest number among three
#include<stdio.h>
void main(){
    int a,b,c,largest;
    printf("enter 3 numbers :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    largest=((a>b&&a>c)?(a):((b>c)?(b):(c)));
    printf("largest number is %d",largest);
}
