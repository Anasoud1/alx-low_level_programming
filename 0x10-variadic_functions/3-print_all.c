#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - function that prints anything
 * @format: list of type of argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, len, num, ch, j;
	float fl;
	char *str, p[] = {'i', 'c', 'f', 's'};

	len = strlen(format);
	va_start(args, format);
	while (i < len)
	{
		if (format[i] == 'c')
		{
			ch = va_arg(args, int);
			printf("%c", ch);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			fl = va_arg(args, double);
			printf("%f", fl);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char*);
			printf("%s", str ? str : "(nil)");
		}
		j = 0;
		while (j < 4)
		{
			if (i != len - 1 && format[i] == p[j])
			printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
