#include <stdio.h>


union mi_union
{
   int entero;
   float flotante;
};


int main()
{

 union mi_union u;
 u.entero = 10;

 ---Cambia toda las variables --- OJO
 u.flotante = 33;
 printf("%d", u.entero);

    
    return 0;
}
