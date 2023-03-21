#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Hello world"; // solo lectura - read only
    char s[]  = "Hello"; // cadena de caracteres  - write/Read
    
    unsigned int lenght = strlen(str);
    char copy[lenght];
    //str[0] ="h";

    strcpy(copy, str);
    *(copy + 4 ) = 'X'; // copy[0] = 'h'  //   
    //s[0] ="h";
    printf("%s\n", str);
    printf("%s\n", s);
    printf("Copia :%s\n", copy);


    return 0;
}
