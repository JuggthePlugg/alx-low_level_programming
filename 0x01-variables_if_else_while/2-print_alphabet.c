#include <stdio.h>
#include <stdlib.h>

/**
 * main - function 
 * Description: Prints letters of the alphabet in lowercase
 * Return: 0
 */

int main()
{
	int i;

	for(i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return 0;
}
