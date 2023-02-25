// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     // int x;
//     // srand(time(NULL));

//     // x = rand() % 11;
//     // printf("\nNúmero aleatorio generado entre 0 y 10 es :%d", x);
//     // printf("\n");
//     // if (n > 0)
//     // {
//     //     printf("is positive");
//     // }
//     // else if (n < 0)
//     // {

//     //     printf("is negative");
//     // }

//     // else
//     // {
//     //     printf("is zero");
//     // }

//     return 0;
// }




#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/*
*main - Positive anything is better than negative nothing
Return (0) (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    printf("%d\n", n);
    int m = n % 10;
    putchar(m);

	/* your code goes there */
     if (n > 0)
    {
        printf("is positive");
    }
    else if (n == 0)
    {
        printf("is zero");
    }
    else
    {
        printf("is negative");
    }
	return (0);
}
