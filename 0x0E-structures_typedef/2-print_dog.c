#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("name: (nill)\n");
	else
		printf("name: %s\n", d->name);

	if (d->age < 0)
		printf("age: (nill)\n");
	else
		printf("age: %f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}
