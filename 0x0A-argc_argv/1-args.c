#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: program to pront the number of argument passed
 * @argc: number of parametre
 * @argv: array of string
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
