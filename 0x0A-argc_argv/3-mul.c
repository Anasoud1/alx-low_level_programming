#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: program to pront the number of argument passed
 * @argc: number of parametre
 * @argv: array of string
 * Return: 0 (success)
 */
int _atoi(char *s);
int main(int argc, char **argv)
{
	int mul, n1, n2;

	if (argc < 2)
		printf("Error\n");
	else
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
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
	return (number);
}
