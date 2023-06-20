#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * print_alphabet - print alphabet with no argument - no return
 *
 * Return: 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
