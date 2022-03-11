#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * Description: Prints the alphabet in lowercase apart from q and e
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
