#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw;

	if (!filename)
		return (-1);
	fo = open(filename, O_WRONLY | O_APPEND);
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
