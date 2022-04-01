#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: contains argument count
 * @argv: contains argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
