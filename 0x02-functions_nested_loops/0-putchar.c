#include <unistd.h>
/**
 * main - entry point
 *
 * _putchar - writes the charatere c to stdout
 *
 * Return: Always 0 (success)
 */

#include "main.h"

int main(void)
{
	int i;
	char c[] = "_putchar\n";

	for (i = 0; i <= 8 ; i++)
		_putchar(c[i]);
	return (0);
}
