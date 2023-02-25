#include <stdio.h>
int main()
{
    
// Name	Length
// float	4 bytes
// double	8 bytes
// long double	8 bytes
// pointer	8 bytes Note that all pointers are 8 bytes.

// ---------Enteros -----------
// Size of int zu: 4 bytes
// Size of int d: 4 bytes
// Size of int i: 4 bytes
// ---------flotantes -----------
// Size of float: 4 bytes
// Size of float: 4 bytes
// Size of float: 4 bytes
// ---------Double -----------
// Size of double: 8 bytes
// ---------Char -----------
// Size of char: 1 byte
// ---------unsigned char int  -----------
// Size of unsigned char: 4 byte
// Size of signed int: 4 byte


    int intType;
    float floatType;
    double doubleType;
    char charType;


    unsigned unsignedChar; 
    unsigned unsignedInt;
    signed signedChar;  
    signed signedInt; //Enteros con signo

    // uso de especificador de formato 
    printf("---------Enteros -----------\n");
    printf("Size of int zu: %zu bytes\n", sizeof(intType));
    printf("Size of int d: %d bytes\n", sizeof(intType));
    printf("Size of int i: %i bytes\n", sizeof(intType));

    printf("---------flotantes -----------\n");
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of float: %u bytes\n", sizeof(floatType));
    printf("Size of float: %i bytes\n", sizeof(floatType));

    printf("---------Double -----------\n");
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("---------Char -----------\n");
    printf("Size of char: %zu byte\n", sizeof(charType));


    printf("---------unsigned char int  -----------\n");
    printf("Size of unsigned char: %zu byte\n", sizeof(unsignedChar));
    printf("Size of unsigned  int: %zu byte\n", sizeof(unsignedInt));

     printf("---------signed char int  -----------\n");
    printf("Size of signed char: %zu byte\n", sizeof(signedChar));
    printf("Size of signed  int: %zu byte\n", sizeof(signedInt));


    
   
   
    return 0;
}
