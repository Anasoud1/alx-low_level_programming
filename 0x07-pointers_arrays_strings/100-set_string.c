#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: string to change
 * @to: string to copy from
 */
void set_string(char **s, char *to)
{
	*s = to;
}
