#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string
 * @n: number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator != 0 && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
