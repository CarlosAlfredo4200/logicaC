#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array for the hash table
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{	
	unsigned long int i;
	hash_table_t *hash_table;
    if (size <= 0)
        return NULL;

    hash_table = NULL;
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_node_t *) * size);
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    for ( i = 0; i < size; i++)
        hash_table->array[i] = NULL;

    return hash_table;
}

// Se definen dos estructuras: hash_node_t que representa un nodo en la tabla hash, y hash_table_t que representa la tabla hash en sí. La estructura hash_table_t tiene dos miembros: size que representa el tamaño del arreglo en la tabla hash, y array que es un arreglo de punteros a nodos hash_node_t.

// Se define la función hash_table_create que crea una nueva tabla hash. Toma un argumento size que representa el tamaño del arreglo en la tabla hash.

// Se verifica si el tamaño size es mayor que cero. Si es igual o menor a cero, se retorna NULL, ya que el tamaño debe ser un valor positivo y mayor a cero.

// Se crea un puntero hash_table de tipo hash_table_t y se le asigna la memoria necesaria utilizando la función malloc para alojar el tamaño de la estructura hash_table_t.

// Se verifica si la asignación de memoria fue exitosa. Si no lo fue, se retorna NULL ya que no se pudo crear la tabla hash debido a la falta de memoria.

// Se asigna el valor del tamaño size al miembro size de la estructura hash_table recién creada.

// Se asigna la memoria necesaria para el arreglo de punteros a nodos hash_node_t utilizando la función malloc con un tamaño igual al tamaño del arreglo multiplicado por el tamaño de un puntero a hash_node_t.

// Se verifica si la asignación de memoria para el arreglo fue exitosa. Si no lo fue, se libera la memoria previamente asignada para hash_table con free y se retorna NULL ya que no se pudo crear la tabla hash debido a la falta de memoria.

// Se itera sobre cada elemento del arreglo array de la estructura hash_table y se inicializa cada elemento a NULL utilizando un bucle for.

// Finalmente, se retorna el puntero hash_table que apunta a la tabla hash recién creada.

// En resumen, la función hash_table_create crea una nueva tabla hash asignando memoria dinámicamente para la estructura hash_table_t y su arreglo de punteros a nodos, inicializa los valores de tamaño y los punteros a NULL, y luego retorna un puntero a la tabla hash creada. Si ocurre algún error en la asignación de memoria, la función retorna NULL indicando que no se pudo crear la tabla hash.




// alfredo Montoya
// porque igualo a null al iterar con el for
// La asignación de NULL en el arreglo de punteros array dentro de la función hash_table_create se realiza para asegurarse de que todos los elementos del arreglo estén inicializados a un valor nulo.

// En la implementación de una tabla hash con manejo de colisiones mediante encadenamiento, se utiliza un arreglo de punteros a nodos (es decir, un arreglo de listas enlazadas) para almacenar los elementos con claves que colisionan en la misma posición del arreglo. Cada puntero en el arreglo apunta al primer nodo de la lista enlazada correspondiente.

// Al inicializar todos los punteros a NULL al crear una nueva tabla hash, se asegura que inicialmente no haya elementos en las listas enlazadas, ya que NULL indica el final de una lista enlazada en C. Esto permite que las listas enlazadas sean correctamente construidas y administradas posteriormente cuando se agreguen elementos a la tabla hash o cuando se realicen operaciones de búsqueda o eliminación.

// Asignar NULL a los punteros del arreglo en la creación de la tabla hash es una práctica común para asegurar una inicialización adecuada y evitar posibles errores o comportamientos inesperados debido a punteros no inicializados en el arreglo.




// Regenerate response
