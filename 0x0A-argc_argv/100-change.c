#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: program that prints the min number of coins
 * @argc: size of array
 * @argv: array of string
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	unsigned int i, n;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
		{
			n = num;
			i = 0;
			while (n >= 25)
			{
				n -= 25;
				i++;
			}
			while (n >= 10)
			{
				n -= 10;
				i++;
			}
			while (n >= 5)
			{
				n -= 5;
				i++;
			}
			while (n >= 1)
			{
				n -= 1;
				i++;
			}
			printf("%d\n", i);
		}
	}
	return (0);
}
