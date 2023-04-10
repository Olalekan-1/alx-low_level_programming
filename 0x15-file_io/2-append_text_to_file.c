#include "main.h"

/**
 * append_text_to_file - function to append to a file
 * @filename: The name of file to append to
 * @text_content: The content of file to append
 * Return: 1 for sucess else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{	FILE * fp;
	int result;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}

	result = fwrite(text_content, _strlen(text_content), 1, fp);
	fclose(fp);

	return (result == 1 ? 1 : -1);
}


/**
* _strlen - to check the length of a string
* @s: the variable to check from
* Return: the length of the string.
*/

int _strlen(char *s)
{	int i = 0;
	while (*s != '\0')
	{	i++;
	s++;
	}
	return (i);
}

