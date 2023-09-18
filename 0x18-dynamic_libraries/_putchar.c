#include <unistd.h>

/**
 *_putchar - a function that print charactere
 * @q: charactere to print
 * Return: charatere
 */
int _putchar(char q)
{
	return (write(1, &q, 1));
}
