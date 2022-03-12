#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Description: Prints all single digit numbers seperated by ,
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
