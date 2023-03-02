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

	for (i = n - 1; i >= n / 2; i--)
	{
	l = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = l;
	}
}
