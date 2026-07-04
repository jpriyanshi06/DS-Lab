//25. Write a program to delete a number from a given location in an array.

#include <stdio.h>
void main(){
    int a[100], n, pos, num,temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (1 to %d): ", n);
    scanf("%d", &pos);

    for(int i = pos; i<n; i++){
        temp=a[i];
        a[i] = a[i + 1];
    }
    n--;

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}