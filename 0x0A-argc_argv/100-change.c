#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: program that prints the min number of coins
 * @argc: size of array
 * @argv: array of string
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int i, money, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);
		if (money < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (money >= coins[i])
				{
					res += money / coins[i];
					money = money % coins[i];
					if (money == 0)
						break;
				}
			}
			printf("%d\n", res);
		}
	}
	return (0);
}
