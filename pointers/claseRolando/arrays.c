#include <stdio.h>
#include <string.h>

int main()
{
     
    char s[]  = "Hello"; // cadena de caracteres  - write/Read
     
    char x1[4] ={'a', 'b', 'c'};
    int array[3] = {1,2,3};

    //*(s + 3) = 'X';
    
    // printf("%s\n", s);
    // printf("%s\n", s);
    // printf("%c\n", *(s + 2));

    // printf("%d\n", &s);
    // printf("%d\n", &s + 1);// aumenta todo el s completo + 1

    // printf("%d\n", s);
    // printf("%d\n", s + 1);// aumenta todo de forma consecutiva

    // printf("%d\n", &array);
    // printf("%d\n", &array + 1);// aumenta todo el s completo + 1

    // printf("%d\n", array);
    // printf("%d\n", array + 1);// aumenta todo el s completo + (1-1323822068 -1323822064)
     printf("%s\n", x1);




    return 0;
}