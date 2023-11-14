#include "main.h"

/**
 * printf_size - Calcs size to cast the arguments
 * @format: formated string to print arguments
 * @i: list of argums to be printed.
 * Return: (size)
 */
int printf_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
