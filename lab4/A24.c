//24. Write a program to insert a number at a given location in an array.

#include <stdio.h>
void main(){
    int a[100], n, pos, num, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter number to insert: ");
    scanf("%d", &num);

    for(i = n; i >= pos; i--){
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}