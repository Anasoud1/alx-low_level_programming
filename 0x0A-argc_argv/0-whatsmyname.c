#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: program that prints its name
 * @argc: count of the arguments
 * @argv: array of pointers
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
