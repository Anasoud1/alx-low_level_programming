#include "3-calc.h"
/**
 * get_op_func - function that select the right operator
 * @s: string
 * Return: pointer of the function needed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
		if (s && *s  == *(ops[i].op) && !s[1])
			return (ops[i].f);
	return (NULL);
}
