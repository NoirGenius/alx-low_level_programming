#include <stdio.h>
#include "main.h"

/**
 * init_dog - Initializes dog struct
 * @d: Pointer to dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: initializes elements of struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
