#include <stdio.h>


/**
* main - To print print the name of all argument passed
* @argc: count the number of argument passed
* @argv: The name of the argument
* Return:  0 always success
*/

int main(int argc, char *argv[])
{	int i;
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
