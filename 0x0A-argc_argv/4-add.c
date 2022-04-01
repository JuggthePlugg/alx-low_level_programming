#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function
 * @argc: contains argument count
 * @argv: contains argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum, num, zro;

	for (i = 0; i < argc; i++)
	{
		sum = 0;
		if (atoi(argv[i]) > 0)
		{
			num = atoi(argv[i]);
			sum += num;
			printf("%d\n", sum);
		}
		else if (atoi(argv[i]) < 0)
		{
			print("not number");
		}
		else
		{
			zro = 0;
			print("%d\n", zro);
		}
	}
}
