#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * standard output
 * @filename: name of text file
 * @letters: number of characters in text file
 *
 * Return: Number of characters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t i = 0;
	int c;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	c = fgetc(fp);

	while (i < letters && c != EOF)
	{
		write(STDOUT_FILENO, &c, 1);
		c = fgetc(fp);
		i++;
	}
	fclose(fp);
	return (i);
}
