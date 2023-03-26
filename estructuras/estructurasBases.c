#include <stdio.h>
#include <string.h>

struct persona

{
    char nombre[30];
    int edad;
    float peso;

} persona1 = {"Carlos", 44, 110},
  persona2 = {"Andrea", 43, 65};

//  Cuando se pasa como parametro se tiene que copiar(MAS BITS)

void mostrarPersona(struct persona p)
{
    printf("\nInformación del cliente :");
    printf("El nombre es : %s", p.nombre);
    printf("\nla edad es : %d", p.edad);
    printf("\nSu peso  es : %.2f", p.peso);
}

// Forma pas eficiiente para no copiar la estructura
    
void mostrarPersona2(struct persona *p)
{
    printf("\nInformación del cliente :");
    printf("El nombre es : %s", p->nombre);
    printf("\nla edad es : %d", p->edad);
    printf("\nSu peso  es : %.2f", p->peso);
}

int main()
{

    mostrarPersona(persona1);
    printf("\n\nForma mas eficiente:\n");
    mostrarPersona2(&persona2);

    return 0;
}
