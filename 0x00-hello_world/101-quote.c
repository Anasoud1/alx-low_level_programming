#include <unistd.h>

/**
 * main - entry point
 *
 * Description: display a text using function write(fd, cst, size)
 *
 * Return: 0 (succes)
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);
	return (1);
}
