#include <stdio.h>
#include "main.h"

/**
 * print_dog - print cont of struct dog
 * @d: pointer to where it'll be printend
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
