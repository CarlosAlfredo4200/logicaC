#include <stdio.h>

enum diasSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

int main()
{
    enum diasSemana dia;
     dia = LUNES;
     printf("%d", dia);
    return 0;
}

