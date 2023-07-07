#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that cheks for a digit
 * @c: parametre to check
 * Return: 1 if a number and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/**
 * _atoi - function that convert a string to an integer
 * @s: string to cheks for number
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i, len;
	int neg = 0;
	int prc = 1;
	int number = 0;
	unsigned int n;
	int pos = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
			pos++;
		if (s[i] == '-')
			neg++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			p = &s[i];
			break;
		}
	}
	for (i = 0;  p[i] >= '0' && p[i] <= '9'; i++)
		;
	len = i;
	for (i = 1; i < len ; i++)
		prc = prc * 10;
	for (i = 0; i < len ; i++)
	{
		number = number + ((p[i] - 48) * prc);
		prc = prc / 10;
	}
	if (neg > pos)
		number = -number;
	n = number;
	return (n);
}
/**
 * main - entry point
 * Description: program to print sum number of argument passed
 * @argc: number of parametre
 * @argv: array of string
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i, s = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!_isdigit(*argv[i]) && *argv[i] != '-')
			{
				printf("Error\n");
				return (1);
			}
			s += _atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
