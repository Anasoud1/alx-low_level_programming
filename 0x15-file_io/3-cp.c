#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * main - entry point
 * Description: copy file to another file
 * @ac: first file
 * @av: second file
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	int fo1, fo2, fr, fw, fc1, fc2;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fo2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fo1 = open(av[1], O_RDONLY);
	fr = read(fo1, buffer, 1024);
	if (fo1 == -1 || fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fw = write(fo2, buffer, fr);
	if (fo2 == -1 || fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fc1 = close(fo1);
	fc2 = close(fo2);
	if (fc1 == -1 || fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fc1);
		exit(100);
	}
	return (0);
}

