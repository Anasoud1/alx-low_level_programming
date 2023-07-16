#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * check_number - function that cheks if the string is a number
 * @s: string to check
 * Return: 0 or 1
 */
int check_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (!isdigit(s[i]))
			return (0);
	return (1);
}
/**
 * error - function print error
*/
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - entry point
 * Description:iprogram that multiply two string
 * @ac: size of array
 * @av: array of string
 * Return: 0 (succes)
 */
int main(int ac, char *av[])
{
	int i, len1, len2, len, carry, num1, num2, *res;
	char *s1, *s2;

	s1 = av[1], s2 = av[2];
	if (ac != 3 || !check_number(s1) || !check_number(s2))
	error();
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	res = malloc(sizeof(int) * (len + 1));
	if (res == 0)
		return (1);
	for (i = 0; i < len; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += res[len1 + len2 + 1] + (num1 * num2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(res[i] + '0');
	}
	_putchar('\n');
	free(res);
	return (0);
}
