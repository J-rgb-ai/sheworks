#include "main.h"
#include <stdarg.h>
/**
 * handle_format - handles a format specifier
 * @format: pointer to the current format specifier
 * @args: variable arguments list
 * @count: pointer to character count
 * Return: void
 */
void handle_format(char **format, va_list args, int *count)
{
	(*format)++;
	if (**format == '\0')
	{
		_putchar('%');
		(*count)++;
		return;
	}
	if(**format == 'c')
	{
		*count = print_char(args, *count);
	}
}
