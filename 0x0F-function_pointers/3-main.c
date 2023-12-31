#include "3-calc.h"
/**
 * main - entry point
 * Description: program that claculate two integer
 * @ac: number of argumet
 * @av: argument
 * Return: 0(succes);
 */
int main(int ac, char *av[])
{
	int num1, num2, res;
	int (*p)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if ((*av[2] == '/' && num2 == 0) || (*av[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(av[2]);
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	res = p(num1, num2);
	printf("%d\n", res);
	return (0);
}
