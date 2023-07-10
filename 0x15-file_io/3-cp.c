#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocated bytes for buffer
 * @file: a file where chars are stored
 * Return: 0
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file decriptors
 * @fd: descriptor to be cclosed
 *
 */

void close_file(int fd)
{
	int d;

	d = close(fd);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: the number of arguments
 * @argv: pointer array to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, w, f, t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp_file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
	w = write(t, buffer, r);
	if (t == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}

	r = read(f, buffer, 1024);
	t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(f);
	close_file(t);

	return (0);
}
