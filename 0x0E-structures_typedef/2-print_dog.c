#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to dog struct
 * Return: d is NULL print (nil)
 * if d is NULL print nothing
 * if name is NULL print Name: (nil)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
