#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[] = "Carlos";
    int longitud;

    longitud = strlen(cadena)/2;
    
         for (int i = longitud; cadena[i] != '\0'; i++)
         {
             
                printf("%c", cadena[i]);
         }
         
        
    

    return 0;
}
