//  Nota final de un alumno, promedio de dos examenes

#include <stdio.h>
int main()
{
    float n1, n2, notaFinal;
    printf("\nIngrese la no del primer examen: ");
    scanf("%f", &n1);

    printf("Ingrese la no del segundo examen: ");
    scanf("%f", &n2);

    notaFinal = (n1 + n2) / 2;
    printf("\nLa nota final es :%.2f", notaFinal);

    return 0;
}
