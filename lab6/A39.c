//39. WAP to check whether the string is Palindrome or not using Pointer
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int check=0,i,j;
    char *str = (char *)(malloc((100)*sizeof(char)));
    char *revstr = (char *)(malloc((100)*sizeof(char)));

    printf("enter string : ");
    scanf("%s",str);

    if(str == NULL || revstr == NULL){
        printf("no data found");
        return;
    }
    
    for(i=strlen(str)-1,j=0;i>=0;i--,j++){
        
            revstr[j]=str[i];
    }
    revstr[j]='\0';
    check = strcmp(str,revstr);
    if(check==0){
        printf("string is palindrom");
    }
    else{
        printf("not palindrom");
    }
}