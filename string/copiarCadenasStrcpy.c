#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
     char a[7]= "Carlos";
      char b[7];

         strcpy(b, a);

        printf("%s\n", a);
        printf("%s", b);

    return 0;
}
