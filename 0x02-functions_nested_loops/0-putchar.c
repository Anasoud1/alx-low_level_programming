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
	char c[] = "_putchar\n";

	write(1, c, 9);
	return (0);
}
