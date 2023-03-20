#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - function name
* @d: structure variable
* Return: values of the variable conditionally
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

