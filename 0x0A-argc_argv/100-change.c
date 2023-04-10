#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int det_coins(int num);
/**
 * main - calc the minimum coins
 * @argc: size
 * @argv: aurguments array
 * Return: sum, 0 or 1
 */
int main(int argc, char *argv[])
{
	int num;
	int i;

	if (argc !=  2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("0\n");
			return (0);
		}
		det_coins(num);
	}
	return (0);
}
/**
 * det_coins - determine the no. of coins
 * @num: current number
 * Return: non
 */
int det_coins(int num)
{
	int sum = 0;
	int current_coins = 0;

	if (num >= 25)
	{
		current_coins = num / 25;
		num = num % 25;
		sum += current_coins;
	}
	if (num  >= 10)
	{
		current_coins = num / 10;
		num = num % 10;
		sum += current_coins;
	}
	if (num >= 5)
	{
		current_coins = num / 5;
		num = num % 5;
		sum += current_coins;
	}
	if (num >= 2)
	{
		current_coins = num / 2;
		num = num % 2;
		sum += current_coins;
	}
	if (num >= 1)
	{
		current_coins = num / 1;
		num = num % 1;
		sum += current_coins;
	}
	printf("%d\n", sum);
	return (0);
}
