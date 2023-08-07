#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * main - entry point
 * Description: copy file to another file
 * @ac: first file
 * @av: second file
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	ssize_t fo1, fo2, fr = 1, fw, fc1, fc2;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fo1 = open(av[1], O_RDONLY);
	if (fo1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fo2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fo2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	while (fr)
	{
		fr = read(fo1, buffer, 1024);
		if (fr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close(fo1);
			close(fo2);
			exit(98);
		}
		if (fr == 0)
			break;
		fw = write(fo2, buffer, fr);
		if (fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			close(fo1);
			close(fo2);
			exit(99);
		}
	}
	fc1 = close(fo1);
	fc2 = close(fo2);
	if (fc1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %ld\n", fc1), exit(100);
	if (fc2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %ld\n", fc1), exit(100);
	return (0);
}

