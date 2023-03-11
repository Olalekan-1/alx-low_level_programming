#include <stdio.h>
#include <stdlib.h>

/**
* main - To change cent into available denomination
* @argc: count the parament
* @argv: names of the parameter
* Return: 0 always sucess
*/

int main(int argc, char *argv[])
{	int i;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}
	int coin[5] = {25, 10, 5, 2, 1};
	int nc = 0;

	for (i = 0; i < 5 && cents; i++)
	{
	int cc = cents / coin[i];

	nc += cc;
	cents -= cc * coin[i];
	}
	printf("%d\n", nc);
	return (0);
}
