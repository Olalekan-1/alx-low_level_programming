#include "dog.h"
#include <stdlib.h>
/**
* init_dog - function to initialize struct dog
* @d: pointer to the struct name
* @name: pointer to name of dog
* @age: the age of the dog
* @owner: The name of the owner of the dog
* Return: pointer to the struct data type
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != ((void *)0))
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
