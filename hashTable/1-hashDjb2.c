unsigned long int hash_djb2(const unsigned char *str) {
    unsigned long int hash = 5381; // Valor inicial del hash
    int c;

    // Recorre cada caracter del string hasta el caracter nulo
    while ((c = *str++) != 0) {
        // Aplica la fórmula de dispersión djb2
        hash = ((hash << 5) + hash) + c; // hash = hash * 33 + c
    }

    return hash;
}

// El algoritmo djb2 es una función de dispersión (hash function) popular creada por Daniel J. Bernstein. Es conocida por su simplicidad y su buen rendimiento en términos de distribución uniforme de las claves. La función utiliza una serie de operaciones bitwise (desplazamiento de bits) y aritméticas para generar el valor del hash a partir de un string representado como un arreglo de caracteres (const unsigned char *str). El valor inicial del hash se establece en 5381, aunque podría utilizarse otro valor según las necesidades del proyecto.

// Esta implementación del algoritmo djb2 recorre cada caracter del string hasta el caracter nulo (\0), y para cada caracter aplica la fórmula de dispersión hash = hash * 33 + c donde hash es el valor actual del hash y c es el valor ASCII del caracter. Esta fórmula ayuda a distribuir las claves de manera uniforme y a evitar colisiones. Al final, se retorna el valor del hash calculado como un número entero sin signo (unsigned long int).