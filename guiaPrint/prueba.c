#incluir "holberton.h"
#incluir <cadena.h>

int principal(int ac, char **av)
{
	edad int;
	nombre del personaje;

	si (ac != 3)
	   retorno (-1);

	nombre = av[1];
	edad = atoi(av[2]);

	_printf("¡Hola! Mi nombre es %s y tengo %d años.\n", nombre, edad);

	retorno (0);
}