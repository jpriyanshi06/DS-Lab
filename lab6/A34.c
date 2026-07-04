//34. WAP to allocate and de-allocate memory for int, char and float variable at 
//runtime.

#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int *a = (int *)(malloc(sizeof(int)));
    char *b = (char *)(malloc(sizeof(char)));
    float *c = (float *)(malloc(sizeof(float)));

    if(a && b && c){
        *a=75;
        *b='p';
        *c=12.5;

        printf("%d",*a);
        printf("%c",*b);
        printf("%f",*c);

        free(a);
        free(b);
        free(c);
    }
    else{
        printf("memory is full");
    }

}