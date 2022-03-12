#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Description: Prints all base 16 numbers in lower case
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	}
	for (j ='a'; j <= 'f'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
