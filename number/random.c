#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {

        x = rand() % 11;
        printf("\nNúmero aleatorio generado entre 0 y 10 es :%d", x);
    }

    return 0;
}
