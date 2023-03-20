#include <stdlib.h>
#include "dog.h"

/**
* new_dog - dog data
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
* Return: pointer to the newdog
*/

dog_t *new_dog(char *name, float age, char *owner)
{	dog_t *newdog;
	newdog = malloc(sizeof(dog_t));
	if (newdog == ((void *)0))
	{
		free(newdog);
		return (((void *)0));
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	free(newdog);
	return (newdog);
}
