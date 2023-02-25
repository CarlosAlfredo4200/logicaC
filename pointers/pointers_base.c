#include <stdio.h>
//  QUE ES PUNTERO?:   Direccion de memoria
// Declarar los * mismo tipo de la variable
    int x = 10;
    int* dirX = &x;

    float y= 20;
    float* dirY = &y;

int main()
{   
    int x = 10;
    //pasar valor como argumento o sea una copia
    jugar(x);

    //pasar valor como puntero / direccion de memoria
    jugarPointer(&x);
    printf("\nPosición en memoria de x con u : %u\n", x);
    printf("Posición en memoria de x con p : %p\n", x);

    return 0;
}



void jugar(int n) // Las funciones voy no devuelven valor
{
    n = n + 4;
    printf("\nValor de n desde Fn jugar es = %d\n", n);
     
}

void jugarPointer(int* n) // pasar  puntero
{   
    // Rescatar lo que hay en la posicion de memoria
    int y = *n;
    y = y + 4;
    printf("Valor de y desde Fn jugarPointer es = %d\n", y);

    // Modificar el valor original
    *n = y; // En la posición de memoria llevale y
     
}




