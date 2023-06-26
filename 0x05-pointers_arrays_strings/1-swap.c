#include "main.h"

/**
 * swap_int - a function that swap the value of two integer
 *
 * @a: first parametre to swap
 * @b: second parametre to swap
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
