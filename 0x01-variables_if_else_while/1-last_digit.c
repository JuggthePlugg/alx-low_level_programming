#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - function
 * Description: Takes last number, checks it and prints if >5, is 0, is <6 but >0
 * Return: 0
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;


	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
