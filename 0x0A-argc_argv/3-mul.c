#include <stdio.h>
#include <stdlib.h>
/**
* main - to print the mutiplication of two number
* @argc: count of argument
* @argv: name of argument
* Return: 0 always sucess
*/

int main(int argc, char *argv[])
{	int j;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	j = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", j);
	return (0);
}
