#include <stdio.h>
int main(int argc, char const *argv[])
{
    int edad;
    printf("Ingrese la edad : ");
    scanf("%d", &edad);

     if (edad > 18)
     {
        printf("\nEres mayor de edad");
     }
     else
     {
        /* code */
        printf("\nNo eres mayor de edad");
     }

    return 0;
}