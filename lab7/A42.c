/*42. Write a menu driven program to implement following operations on the singly 
linked list. 
 Insert a node at the front of the linked list.
 Display all nodes.
 Delete a first node of the linked list.
 Insert a node at the end of the linked list.
 Delete a last node of the linked list.
 Delete a node from specified position.
 Count the no. of nodes in the linked list*/
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int info;
    struct Node *link;
};

struct Node *First = NULL;

//Insert a node at the front of the linked list.

void insertFront(int value) {
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->info = value;
    newNode->link = First;
    First = newNode;
    
}

//Display all nodes.
void display() {
    struct Node *Save = First;

    if (Save == NULL) {
        printf("Linked List is Empty.\n");
        return;
    }

    printf("Linked List: ");
    while (Save != NULL) {
        printf("%d -> ", Save->info);
        Save = Save->link;
    }
    printf("NULL\n");
}

//Delete a first node of the linked list.
void deleteFirst(){

    struct Node * Save = First;

    if(Save == NULL){
        printf("list is empty");
        return;
    }

    First = First->link;
    free(Save);
}

//Insert a node at the end of the linked list.
    void InsertEnd(int x){

        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

        if(newnode == NULL){
            printf("memory allocation fail");
            return;
        }

        newnode->link = NULL;
        newnode->info = x;

        if(First==NULL){
            First = newnode;
            return;
        }

        struct Node * Save = First;

        while (Save->link!=NULL)
        {
            Save = Save->link;
        }
        
        Save->link = newnode;
    }

//Delete a last node of the linked list.
    void DeletaLast(){
        struct Node *Save = First;
        struct Node *Pre;

        if(First==NULL){
            printf("List is empty");
            return;
        }
        if (First->link == NULL){
        free(First);
        First = NULL;
        return;
    }
        while (Save->link!=NULL)
        {
            Pre = Save;
            Save = Save->link;
        }
        Pre->link=NULL;
        free(Save);
    }

//Delete a node from specified position.
    void Deletespecific(int position){
        if(First==NULL){
            printf("list is null");
            return;
        }
        if (position <= 0){
        printf("Invalid position\n");
        return;
    }

        struct Node * Save = First;
        struct Node * pre;
     
        if (position == 1){
        First = First->link;
        free(Save);
        return;
    }

        for(int i=0;i<position && Save != NULL;i++){
              pre = Save;
            Save = Save->link;
        }

        if(Save==NULL){
            printf("position not found");
            return;
        }
        pre->link = Save->link;
        free(Save);
}

//Count the no. of nodes in the linked list
void Count(){
    int count = 0;
    struct Node *Save = First;
    while (Save !=NULL)
    {
        count++; 
        Save = Save->link; 
    }
    printf("count : %d\n",count);
    
}
int main() {
    int n, value, i,x,position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("enter ele insert at last : ");
    scanf("%d",&x);

    printf("enter position to Delete : ");
    scanf("%d",&position);

    for (i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);
        insertFront(value);
    }
    deleteFirst();
    InsertEnd(x);
    printf("list after deleteFirst(),InsertEnd(x) : \n");
    display();
    printf("\n");
    DeletaLast();
    Deletespecific(position);
    printf("list after DeletaLast(),Deletespecific(position) :\n");
    display();
    printf("\n");
    Count();
    return 0;
}
