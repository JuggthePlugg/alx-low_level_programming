#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings passed as arguments
 * @n: number of arguments passed
 * @separator: word seperators (commas)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);

