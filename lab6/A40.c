/*40. WAP to define a C structure named Student (roll_no, name, branch and 
batch_no) and also to access the structure members using Pointer*/

struct student
{
    int roll_no;
    char name[50];
    char branch[100];
    int batch_no;
};

#include<stdio.h>
void main(){
    struct student s;
    struct student *p;

    p=&s;
    printf("enter roll no :");
    scanf("%d",&p->roll_no);

     printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter Branch: ");
    scanf("%s", p->branch);

    printf("Enter Batch Number: ");
    scanf("%d", &p->batch_no);

    printf("Roll Number : %d\n", p->roll_no);
    printf("name      : %s\n", p->name);
    printf("Branch      : %s\n", p->branch);
    printf("Batch Number: %d\n", p->batch_no);
}
