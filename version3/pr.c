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

  for (i = 0; i < size; i++)
    hash_table->array[i] = NULL;

  return hash_table;
}

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

//-----------------

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

hash_node_t *create_hash_node(const char *key, const char *value)
{
  hash_node_t *node;
  node = malloc(sizeof(hash_node_t));
  if (node == NULL)
  {
    return NULL;
  }

  node->key = strdup(key);
  node->value = strdup(value);
  node->next = NULL;

  return node;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index;
  hash_node_t *new_node;
  if (ht == NULL || key == NULL || strlen(key) == 0)
  {
    return 0;
  }

  index = hash_djb2((const unsigned char *)key) % ht->size;

  new_node = create_hash_node(key, value);
  if (new_node == NULL)
  {
    return 0;
  }

  if (ht->array[index] == NULL)
  {
    ht->array[index] = new_node;
  }
  else
  {

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
  }

  return 1;
}

/ -- -- -- -- -- -- -- -- -- -- --

                                // Función para agregar o actualizar un elemento en la tabla hash
                                int
                                hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  if (ht == NULL || key == NULL || strlen(key) == 0)
  {
    return 0; // No se permite tabla hash nula, clave nula o clave vacía
  }

  unsigned long index = hash(key, ht->size);
  hash_node_t *node = ht->buckets[index];

  // Buscar si la clave ya existe en la tabla hash
  while (node != NULL)
  {
    if (strcmp(node->key, key) == 0)
    {
      free(node->value);           // Liberar la memoria del valor existente
      node->value = strdup(value); // Duplicar y actualizar el valor
      return 1;                    // Se ha actualizado el valor existente
    }
    node = node->next;
  }

  // La clave no existe, crear un nuevo nodo y agregarlo a la tabla hash
  hash_node_t *new_node = create_hash_node(key, value);
  new_node->next = ht->buckets[index];
  ht->buckets[index] = new_node;
  return 1; // Se ha agregado un nuevo elemento a la tabla hash
}

//---------------------------

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Función para crear una nueva tabla hash
hash_table_t *create_hash_table(int size)
{
  hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));
  ht->size = size;
  ht->buckets = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
  return ht;
}

// Función para calcular el hash de una cadena de caracteres
unsigned long hash(const char *str, int size)
{
  unsigned long hash = 5381;
  int c;
  while ((c = *str++))
    hash = ((hash << 5) + hash) + c;
  return hash % size;
}

// Función para crear un nuevo nodo de la tabla hash
hash_node_t *create_hash_node(const char *key, const char *value)
{
  hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));
  node->key = strdup(key);
  node->value = strdup(value);
  node->next = NULL;
  return node;
}

// Función para agregar o actualizar un elemento en la tabla hash
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  if (ht == NULL || key == NULL || strlen(key) == 0)
  {
    return 0; // No se permite tabla hash nula, clave nula o clave vacía
  }

  unsigned long index = hash(key, ht->size);
  hash_node_t *node = ht->buckets[index];

  // Buscar si la clave ya existe en la tabla hash
  while (node != NULL)
  {
    if (strcmp(node->key, key) == 0)
    {
      free(node->value);           // Liberar la memoria del valor existente
      node->value = strdup(value); // Duplicar y actualizar el valor
      return 1;                    // Se ha actualizado el valor existente
    }
    node = node->next;
  }

  // La clave no existe, crear un nuevo nodo y agregarlo a la tabla hash
  hash_node_t *new_node = create_hash_node(key, value);
  new_node->next = ht->buckets[index];
  ht->buckets[index] = new_node;
  return 1; // Se ha agregado un nuevo elemento a la tabla hash
}

#include "hash_tables.h"
/**
 * hash_djb2 - Hash function, takes a string and turns it into a hash number
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: The hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
  unsigned long int hash = 5381;
  int c;
  while ((c = *str++) != 0)
  {
    hash = ((hash << 5) + hash) + c;
  }
  return (hash);
}
