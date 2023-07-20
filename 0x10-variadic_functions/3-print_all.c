#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - function that prints anything
 * @format: list of type of argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char*);
					printf("%s", str ? str : "(nil)");
					break;
				default:
					i++;
					continue;
			}
			if (i != len - 1)
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
