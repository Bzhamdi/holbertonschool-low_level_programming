#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 *
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on and -1 failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, i = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i])
		i++;
	if (write(f, text_content, i) == -1)
		return (-1);
	close(f);
	return (1);
}

