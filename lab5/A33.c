/*33. Design anagram game using array. 
 Allow a user to enter N words and store it in an array. 
 Generate a random number between 0 to N-1. 
 Based on the random number generated display the word stored at that 
index of an array and allow user to enter its anagram. 
 Check whether the word entered by the user is an anagram of displayed 
number or not and display an appropriate message. 
 Given a word A and word B. B is said to be an anagram of A if and only if the 
characters present in B is same as characters present in A, irrespective of 
their sequence. For ex: “LISTEN” == “SILENT”*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void main(){
    int n,i,j;
    char word[20][50],userword[50],temp1[50],temp2[50],ch;
    
    printf("enter num of words : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",word[i]);
    }

    srand(time(NULL));
    int r = rand()%n;

    printf("%s\n",word[r]);

    printf("enter anagram : ");
    scanf("%s",userword);

    strcpy(temp1,word[r]);
    strcpy(temp2,userword);

    int len1 = strlen(temp1);
    int len2 = strlen(temp2);

    if(len1!=len2){
        printf("not an anagram\n");
    }
    for(i=0;i<len1-1;i++){
        for(j=i+1;j<len1;j++){
            if(temp1[i]>temp1[j]){
                ch=temp1[i];
                temp1[i]=temp1[j];
                temp1[j]=ch;
            }
        }
    }
     for(i=0;i<len2-1;i++){
        for(j=i+1;j<len2;j++){
            if(temp2[i]>temp2[j]){
                ch=temp2[i];
                temp2[i]=temp2[j];
                temp2[j]=ch;
            }
        }
    }

    if(strcmp(temp1,temp2)==0){
        printf("it is analog");
    }
    else{
        printf("not analog");
    }
    
}