#include <stdlib.h>
#include <time.h>

/**
 * main - a program to print a radom passwords
 *
 * Return: 0 success
 */
int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
