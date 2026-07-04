//30. WAP to replace lowercase characters by uppercase & vice-versa in a user 
//specified string

#include <stdio.h>
void main(){
    int i;
    char str[100];

    printf("Enter str :");
        scanf("%s", str);

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
        printf("%s",str);
}