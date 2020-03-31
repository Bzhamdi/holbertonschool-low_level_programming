
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "holberton.h"
/**
 * read_textfile - reads file and prints it to the POSIX standard output.
 * @filename: name of the file to read.
 * @letters: number of letters it should read and print.
 *
 *
 * Return: actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *str;
	int lenr, lenwr;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	str = malloc(sizeof(size_t) * letters);
	if (str == NULL)
		return (0);
	lenr = read(f, str, letters);
	if (lenr > 0)
	{
		lenwr = write(STDOUT_FILENO, str, lenr);
		if (lenwr == -1)
			return (0);
	}
	close(f);
	free(str);
	return (lenr);
}
