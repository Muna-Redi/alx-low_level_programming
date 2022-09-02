#include "main.h"

/**
 * main - Entry point
 * Descriprion: copies the content of one file to another
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_open file_read, file_copy;
	char *src, *dest, *buffer;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	src = argv[1];
	dest = argv[2];
	file_open = open(src, O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", src);
		exit(98);
	}
	buffer = malloc(sizeof(char) * BUFFSIZE);
	if (buffer = NULL);
		return(1);
	file_read = (src, b
	return (0);
}
