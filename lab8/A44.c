/*44. Write a program to remove the duplicates nodes from given sorted Linked List.
 Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
 Output: 1 → 6 → 13 → 27*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *link;
};

struct Node *First = NULL;

void InsertFirst1(int x){
   
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode->info = x;
    newnode->link = First;
    First = newnode;
}
void display(struct Node *first){
    struct Node * save = first;

    if(first == NULL){
        printf("list is null");
    }
    while(save != NULL){
        printf("%d ->",save->info);
        save = save->link;
    }
    printf("NULL \n");
}
void RemoveDuplicate(struct Node * first){
    struct Node *save = first;
    struct Node *pre;


    if(first == NULL){
        printf("empty list");
        return;
    }

    while(save != NULL && save->link != NULL){
        if(save->info == save->link->info){
            pre = save->link;
           save->link = pre->link;
            free(pre);
        }
        else{
            save = save->link;
        }
    }
}
void main(){
    InsertFirst1(1);
    InsertFirst1(1);
    InsertFirst1(6);
    InsertFirst1(13);
    InsertFirst1(13);

    display(First);
    RemoveDuplicate(First);
    display(First);
}
