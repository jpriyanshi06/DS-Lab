//43. WAP to check whether 2 singly linked lists are same or not.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int info;
   struct Node *link;
};

struct Node *First1 = NULL;
struct Node *First2 = NULL;

void InsertFirst1(int x){
   
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode->info = x;
    newnode->link = First1;
    First1 = newnode;
}
void InsertFirst2(int x){
   
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode->info = x;
    newnode->link = First2;
    First2 = newnode;
}
void Display(struct Node *first){
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
void compare(){
    int issame = 0;
    while (First1 != NULL && First2 != NULL)
    {
        if(First1->info != First2->info){
            issame =1 ;
            break;
        }
        First1 = First1->link;
        First2 = First2->link;
    }

    if(First1 == NULL && First2 == NULL && issame == 0){
        printf("list are same");
    }
    else{
        printf("list are not same");
    }
}
void main(){
    InsertFirst1(1);
    InsertFirst1(2);
    InsertFirst1(3);
    InsertFirst1(4);

    InsertFirst2(1);
    InsertFirst2(2);
    InsertFirst2(3);
    InsertFirst2(4);

    Display(First1);
    Display(First2);

    compare();

}