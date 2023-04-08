#include "main.h"

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


/**
 * create_file - Function to create a file
 * @filename: the file to create
 * @text_content: content of file
 * Return: file | (file & text_content) | -1
 */

int create_file(const char *filename, char *text_content)
{	int file_des;
	int length;
	ssize_t bytes_write;

	length = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_des == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_write = write(file_des, text_content, length);
		if (bytes_write != length)
		{
			close(file_des);
			return (-1);
		}
	}

	close(file_des);
	return (1);
}







































