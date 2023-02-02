#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c;

    printf("%d - %d, ", a, b);
    for (int i = 0; i < 10; i++)
    {
        c = a + b;
        printf("%d, ", c);

        a = b;
        b = c;
    }

    return 0;
}
