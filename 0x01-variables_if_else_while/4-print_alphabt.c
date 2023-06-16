#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: display aplhabet without q and e
 *
 * Return: 0(success)
*/

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
