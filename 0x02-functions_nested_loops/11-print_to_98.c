#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function to print until to number 98
 * @n: parametre that need to be the last digit
 */
void print_to_98(int n)
{	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	printf("98\n");
}
