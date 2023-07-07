#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: program that prints all arg its receives
 * @argc: count of the arguments
 * @argv: array of pointers
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
