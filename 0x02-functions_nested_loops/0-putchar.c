#include <unistd.h>
/**
 * main - entry point
 *
 * _putchar - writes the charatere c to stdout
 *
 * Description: a c program to display _putchar
 *
 * Return: 0 (success)
 */

#include "main.h"

int main(void)
{
	_putchar("_putchar\n");
	return (0);
}
int _putchar(char c[])
{
	return (write(1, &c, 8));
}
