#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}

dog_t *new_dog(char *name, float age, char *owner)
{

    dog_t *newDog_t;
    int sizeName = 0;
    int sizeOwner = 0;
    int k, i;

    for (k = 0; name[sizeName] != '\0'; k++)
    {
        sizeName++;
    }
    for (i = 0; owner[sizeOwner] != '\0'; i++)
    {
        sizeOwner++;
    }

    newDog_t = malloc(sizeof(dog_t));
    if (newDog_t == NULL)
        return (NULL);

    newDog_t->name = malloc(sizeName * sizeof(newDog_t->name));
    if (newDog_t->name == NULL)
    {
        return (NULL);
    }
        free(newDog_t->name);

    for (k = 0; k < sizeName; k++)
        newDog_t->name[k] = name[k];

    newDog_t->age = age;

    newDog_t->owner = malloc(sizeOwner * sizeof(char));
    if (newDog_t->owner == NULL)
    {
        return (NULL);
    }
    free(newDog_t->owner);
    for (k = 0; k < sizeOwner; k++)
    {
        newDog_t->owner[k] = owner[k];
    }

    return (newDog_t);
}


 
