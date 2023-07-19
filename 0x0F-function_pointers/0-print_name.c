#include "function_pointers.h"

/**
 * print_name - function that print name
 * @name: string to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
