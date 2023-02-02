#include <stdio.h>

// --------Crear prototipo de la funcion ------
float funPromedio(float nota1, float nota2, float nota3);
float aprobado(float promedio);
int main()
{
    float nota1, nota2, nota3;
    float promedio, mensaje;

    printf("Ingrese N° 1 : ");
    scanf("%f", &nota1);
    printf("Ingrese N° 2 : ");
    scanf("%f", &nota2);
    printf("Ingrese N° 3 : ");
    scanf("%f", &nota3);

    promedio = funPromedio(nota1, nota2, nota3);
    printf("\nEl promedio de las 3 notas es %.2f", promedio);
    mensaje = aprobado(promedio);
    return 0;
}

// -------- crear la funcion y declararla ----------
float funPromedio(float nota1, float nota2, float nota3)
{
    float promedio;
    promedio = (nota1 + nota2 + nota3) / 3;
    return promedio;
}

float aprobado(float promedio)
{

    if (promedio > 3)
    {
        printf("\nFelicidades! has aprobado con una calificación de %.2f", promedio);
    }
    else
    {
        /* code */
        printf("\nLo sentimos! No aprobaste, tu calificación es de %.2f", promedio);
    }
}
