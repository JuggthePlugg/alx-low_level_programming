#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Description: Prints letters of the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'z' ; i <= 'a' ; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
