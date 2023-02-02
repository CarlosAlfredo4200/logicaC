#include <stdio.h>
#include <math.h>


int main(void)  //void
{   
    float argumento, seno;
    // funcion de biblioteca
    printf("\nMensaje desde printf"); 
    
    
    printf("\ningrese argumento para seno : ");
    scanf("%f",&argumento);
    seno = sin(argumento);

    printf("\nEl seno de %f es = %f", argumento, seno );
    
     



    return 0;
}


// -----FUNCIONES DE BIBLIOTECAS-----
// <stdio.h>
//     print() = escribir
//     scanf() = leer mensajes
//     getchar()
//     putchar()

// <math.h>
//     sqrt() = 
//     pow()  = raiz
//     sin()  = seno
//     cos()

// <ctype.h>
//     isdigit(c) = es digito o no
//     isalpha(c) = si es letra

