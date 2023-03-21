#include <stdio.h>
#include <string.h>

struct persona

{
    char nombre[30];
    int edad;
    float peso;

} persona1 = {"Carlos", 44, 110};

void mostrarPersona(struct persona p)
{
    printf("Información del cliente :");
    printf("\nEl nombre es : %s", p.nombre);
    printf("\nEl la edad es : %d", p.edad);
    printf("\nEl su peso  es : %.2f", p.peso);
}

int main()
{

    struct persona pp
    {
       
    };
    
    mostrarPersona(persona1);

                return 0;
}
