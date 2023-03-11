#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - To add positive number
* @argc: argument count
* @argv: name of argument
* Return: 0 always sucess
*/

int main(int argc, char argv[])
{	int i;
	int sum = 0;
	char *j; 
	unsigned int k;
	if (i > 1)
	{
	for (i = 1; i < argc; i++)
	{
	*j = argv[i];
	for (k = 0; k < strlen(j); k++)
	{
	if (j[k] < 48 || j[k] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(j);
	j++;
	}
	printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
	
}


	

	
