#include <stdio.h>

// ---------declarar funcion-------

float operaciones(float num, float num2, char opereacion);
int main()
{
    char operacion;
    float num, num2;
    float resultado;
     

    printf("\nIngrese la operacion ( + ñ * /)  : ");
    scanf("%c", &operacion);
    printf("\nIngrese primer N° : ");
    scanf("%f", &num);
    printf("\nIngrese segundo N° : ");
    scanf("%f", &num2);

    resultado = operaciones(num, num2, operacion);

    printf("\nEl resultado es :%.2f", resultado);

    return 0;
}

// --- funcionamiento fn ----
float operaciones(float num, float num2, char operacion)
{
    float resultado;
    switch (operacion)
    {
    case '+':
        resultado = num + num2;
        break;

    case '-':
        resultado = num - num2;
        break;

    case '*':
        resultado = num * num2;
        break;

    case '/':
        if (num2 != 0)
        { 
            resultado = num / num2;
            break;
        }else
        {
               
            printf("El segundo número no puede ser 0");
            break;
        }

    default:
        break;
    }

    return resultado;
};