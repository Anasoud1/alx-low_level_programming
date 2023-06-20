#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 *_putchar: functon that display a charactere
 *
 * print_alphabet: funciton that print alphabet with no argument - no return
 *
 * Return: 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
