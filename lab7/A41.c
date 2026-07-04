/*41. Write a program to implement a node structure for singly linked list. Read the 
data in a node, print the node.*/

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

void main(){
    insertFront(1);
    insertFront(2);
    insertFront(3);
    insertFront(4);
    insertFront(5);
    insertFront(6);

    display();

}