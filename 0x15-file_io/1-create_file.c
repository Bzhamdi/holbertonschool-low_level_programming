#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 *
 * @text_content: string to write to the file
 *
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, i = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	w = write(f, text_content, i);
	if (w == -1)
	return (-1);
	return (1);
}
