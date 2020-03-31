#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "holberton.h"
/**
 * check99 - checks that file_to was created.
 * @a: checks if true of false.
 * @file: fila name.
 */
void check99(int a, char *file)
{
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

/**
 * check100 - checks that file were closed.
 * @test: int of closed.
 * @f: file descriptor.
 *
 */
void check100(int test, int f)
{
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
 * check97 - checks the number of arguments.
 * @argc: number of arguments.
 *
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed.
 * @argv: array of the arguments.
 *
 *
 * Return: 0 success.
 */
int main(int argc, char **argv)
{
	char *str;
	mode_t permission;
	int a, b, r, w, test1, test2;

	check97(argc);
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	b = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permission);
	check99(b, argv[2]);
	str = malloc(1024);
	if (str == NULL)
		return (0);
	r = read(a, str, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (r > 0)
	{
		w = write(b, str, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(a, str, 1024);
	}
	test1 = close(a);
	test2 = close(b);
	check100(test1, a);
	check100(test2, b);
	return (0);
}
