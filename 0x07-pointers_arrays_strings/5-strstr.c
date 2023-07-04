#include "main.h"

/**
 * _strstr - function that locate a substring
 * @haystack: string to check in
 * @needle: string to search from
 *
 * Return: p if not NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
		if (*needle == *haystack && *needle != '\0')
			return (haystack);
	return (NULL);
}
