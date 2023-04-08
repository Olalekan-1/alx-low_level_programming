#include "main.h"

/**
 * read_textfile - Function to read text file and print to the STDOUT
 * @filename: The file to read
 * @letters: The amount of byte to read
 * Return:The total amount of byte read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{	ssize_t bytes_read;
	ssize_t bytes_write;
	FILE *fp;
	char *buffer;

	/*if (filename == NULL)*/
	/*{*/
		/*return (0);*/
	/*}*/

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, fp);
	fclose(fp);
	if (bytes_read == 0)
	{
		free(buffer);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	if (bytes_write == bytes_read)
	{
		return (bytes_read);
	}
	else
		return (0);
}
























