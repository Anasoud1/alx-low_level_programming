#include "main.h"

/**
 * print_last_digit - function that print the last digit
 * @n: the number that we will extrat the last number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _putchar((n % 10) + 48);
	return (last_digit);
}
