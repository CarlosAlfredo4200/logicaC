unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  // Calculate the hash value using the djb2 hash function
  unsigned long int hash_value = hash_djb2(key);

  // Calculate the index by taking the modulus of the hash value with the size of the hash table
  unsigned long int index = hash_value % size;

  // Return the calculated index
  return index;
}

// Veamos la función paso a paso:

// Calcular el valor hash utilizando la función hash_djb2: unsigned long int valor_hash = hash_djb2(clave);
// Se supone que la función hash_djb2 está previamente definida e implementada. Debe tomar un const unsigned char * clave como entrada y devolver un unsigned long int valor hash.

// Calcula el índice tomando el módulo del valor hash con el tamaño de la tabla hash: unsigned long int index = valor_hash % tamaño;
// La operación módulo % se utiliza para encontrar el resto cuando se divide valor_hash por tamaño. Esto nos da un índice dentro del rango del tamaño de la tabla hash.

// Devuelve el índice calculado: return index;
// El índice calculado se devuelve como resultado final.

// Tenga en cuenta que la función key_index asume que el parámetro size representa el tamaño del array de la tabla hash, y debe pasarse como argumento al llamar a esta función. Además, asegúrese de que la función hash_djb2 está implementada correctamente y devuelve un valor hash válido para la clave dada.