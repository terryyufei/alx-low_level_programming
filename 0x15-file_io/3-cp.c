#include "main.h"
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - program that copies the contents of a file to another
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, res0, res1;
	char *buffer;

	if (argc != 3) /*checks no of arguments passed*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (0);

	fd_from = open(argv[1], O_RDONLY);
	error_98(fd_from, buffer, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_99(fd_to, buffer, argv[2]);
	do {
		res0 = read(fd_from, buffer, BUFFER_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffer, argv[1]);
		res1 = write(fd_to, buffer, res0);
		error_99(res1, buffer, argv[2]);
	} while (res1 >= BUFFER_SIZE);
	res0 = close(fd_to);
	error_100(res0, buffer);
	free(buffer);
	return (0);
}

/**
* error_99 - checks error 99
* @fd_to: value to check
* @buffer: the buffer
* @argv: argument
*/
void error_99(int fd_to, char *buffer, char *argv)
{
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
* error_100 - checks error 100
* @fd_to: the value to check
* @buffer: the buffer
*/
void error_100(int fd_to, char *buffer)
{
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		free(buffer);
		exit(100);
	}
}
