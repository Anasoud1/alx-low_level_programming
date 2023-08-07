#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw;

	if (!filename)
		return (-1);
	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);
	if (!text_content)
	{
		close(fo);
		return (1);
	}
	fw = write(fo, text_content, strlen(text_content));
	if (fw == -1)
		return (-1);
	close(fo);
	return (1);
}
