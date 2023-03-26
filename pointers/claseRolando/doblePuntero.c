#include <stdio.h>

void swap (int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int num = 13;
    int *ptr1;
    int **ptr2;

    ptr1 = &num;
    ptr2 = &ptr1;

    printf("num origen %d\n", num);
    printf("num desde ptr1 (puntero)%d\n", *(ptr1));
    printf("num desde ptr1 (puntero)%d\n", (ptr1));
    printf("num desde ptr2 (puntero a puntero) %d\n", *(*ptr2));
    printf("num desde ptr2 (puntero a puntero) %d\n", (*ptr2));

    return 0;
}