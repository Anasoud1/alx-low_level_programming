#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: size of array
 * @av: array of string
 * Return: null or a pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
