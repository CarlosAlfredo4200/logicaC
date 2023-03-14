
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: NULL if 0 or fail else return ptr
 */


char *create_array(unsigned int size, char c);

void spb(char *buffer, unsigned int size){

    unsigned int i;

    i = 0;
     while (i < size)
     {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }

        printf("0x%02x", buffer[i]);
        i++;
     }
     printf("\n");
     
}

int main(void)
{
    char *buffer;
    buffer = create_array(89, 'H');
    if (buffer == NULL)
    {
        printf("Fallo");
        return (1);
    }
    spb(buffer, 8);
    free(buffer);
    return(0);
    
    return 0;
}

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
     
	return (s);
}