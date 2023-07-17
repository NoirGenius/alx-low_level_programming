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
int main()
{
    struct dog my_dog;
    init_dog(&my_dog, "JJ", 7, "Cate");

    printf("Dog Name: %s\n", my_dog.name);
    printf("Dog Age: %.1f\n", my_dog.age);
    printf("Dog Owner: %s\n", my_dog.owner);

    return 0;
}
