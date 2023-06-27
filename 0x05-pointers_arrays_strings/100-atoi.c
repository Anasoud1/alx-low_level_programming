#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *@s: string to cheks for number
 *
 * Return: converted integer
*/
int _atoi(char *s)
{
	int i, len;
	int neg = 0;
	int prc = 1;
	int number = 0;
	int pos = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
			pos++;
		if (s[i] == '-')
			neg++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			p = &s[i];
			break;
		}
	}
	for (i = 0;  p[i] >= '0' && p[i] <= '9'; i++)
		;
	len = i;
	for (i = 1; i < len ; i++)
		prc = prc * 10;
	for (i = 0; i < len ; i++)
	{
		number = number + ((p[i] - 48) * prc);
		prc = prc / 10;
	}
	if (neg > pos)
		number = -number;
	return (number);
}
