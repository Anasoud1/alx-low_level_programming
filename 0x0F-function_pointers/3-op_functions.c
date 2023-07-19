#include "3-calc.h"

/**
 * op_add - function that add 2 integer
 * @a: first int
 * @b: second int
 * Return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that substract two int
 * @a: first element
 * @b: seconf element
 * Return: value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - funtion that multiply two int
 * @a: first element
 * @b: second element
 * Return: value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide two int
 * @a: first element
 * @b: second element
 * Return: value or exit status 100
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that give the modulo of two int
 * @a: first eleent
 * @b: second element
 * Return: value or exit 100
 */
int op_mod(int a, int b)
{
	return (a % b);
}
