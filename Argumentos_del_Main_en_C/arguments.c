#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count, i;
    printf("El valor del argumento es :%d\n", argc);
    for (i = 0; i < argc; i++)
    {
        
    printf("El valor del argumentos %s es :%s\n", i,  argv[i]);
    }
    
    return 0;
}
