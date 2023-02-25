#include <stdio.h>

int main()
{
    int x;
    srand(time(NULL));

    x = rand() % 11;
    printf("\nNúmero aleatorio generado entre 0 y 10 es :%d", x);
    printf("\n");
    if (x > 5)
    {
        printf("Last digit of %d, and is greater that 5", x);
    }
    else if (x < 6 && x != 0)
    {

        printf("Last digit of %d, and is less than 6 and not 0 ", x);
    }

    else
    {
        printf("Last digit of %d, is 0", x);
    }


return 0;
}