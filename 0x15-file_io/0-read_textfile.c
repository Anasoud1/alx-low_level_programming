#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX 
 * 			standard output
 * @filename: file name
 * @letters: size of buffer
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t bytes;
	char *buffer;

	if (!filename || !letters)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	bytes = read(fo, buffer, letters);
	if (bytes == -1)
		return (0);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	if (bytes == -1)
		return (0);
	free(buffer);
	close(fo);
	return (bytes);
}
