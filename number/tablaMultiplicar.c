#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int res;
    printf("Ingrese el número de la tabla : ");
    scanf("%d",&num);

    for (int i = 0; i <= 10; i++)
    {
        res = num * i;
        printf("\n%d * %d es = %d", num, i, res);
    }
    

    for (int i = 0; i < 10; i++)
    {
        /* code */
    }
    

    return 0;
}
