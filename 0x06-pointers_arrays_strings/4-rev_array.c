#include "main.h"

/**
* reverse_array - To reverse the array element
* @a: The pointer to the string
* @n: The n index(s)
* Return: The reversed string
*/

void reverse_array(int *a, int n)
{	int i;
	int l;

	while (a[i++])
	l++;

	for (i = 0, l = n - 1; i < l; i++, l--)
	{
	char j = a[i];

	a[i] = a[l];
	a[l] = j;
	}
}
