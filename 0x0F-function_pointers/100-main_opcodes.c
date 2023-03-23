#include <stdio.h>
#include <stdlib.h>
/**
* main - program to print opcode
* @argc: argunment count
* @argv: argument value
* Return: 0 always sucess
*/
int main(int argc, char *argv[])
{	int bytes;
	int i;
	int (*main_address)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		code = *(unsigned char *)main_address;
		printf("%.2x", code);
		if (i == bytes - 1)
		{
			continue;
		}
		printf(" ");
		main_address++;
	}
	printf("\n");
	return (0);
}
