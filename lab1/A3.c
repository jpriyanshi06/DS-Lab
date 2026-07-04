#include<stdio.h>
void main(){
    char c;
    printf("entre char : ");
    scanf("%c",&c);
    if(c=='A'|| c=='E'|| c=='I'||c=='O'||c=='U'||c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u'){
        printf("char is vowel");
    }
    else{
        printf("char is consonant");
    }
}