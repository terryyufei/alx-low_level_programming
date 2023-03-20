#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: ptr to struct dog
 * @name: ptr to char name which is dog's name
 * @age: age of the dog
 * @owner: ptr to char owner of the dog
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
	       d->owner = owner;
	}
}
