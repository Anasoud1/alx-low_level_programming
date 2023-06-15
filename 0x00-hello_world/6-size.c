#include <stdio.h>

/**
 *main - entry point
 *
 * Description: a c program to print a size of various types
 *
 * Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int : %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n ", sizeof(float));
	return (0);
}