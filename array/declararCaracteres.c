#include <stdio.h>


#define NUM 10
int main(int argc, char const *argv[])
{
     // ----------------  DECLARAR Caracteres------------------

    char apellido[NUM] = {'M','o','n', 't','o','y','a','\0'};
    char nombre[NUM] = "Carlos";

     
    printf("%s %s", nombre, apellido);
     
    return 0;
}
