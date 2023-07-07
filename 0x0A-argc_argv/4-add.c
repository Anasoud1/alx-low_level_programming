#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_number - check if the string is a digit
 * @str: string
 * Return: 0 (success)
 */
int check_number(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);

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
			if (!check_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
