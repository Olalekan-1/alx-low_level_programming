#include <stdlib.h>
#include "dog.h"

/**
* free_dog - To free allocated for dog
* @d: pointer to the dog
* Return: 0 always sucess
*/

void free_dog(dog_t *d)
{
	if (d != ((void *)0))
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
