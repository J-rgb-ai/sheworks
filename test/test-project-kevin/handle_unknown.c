#include "main.h"
/**
 * handle_unknown - handles unknown specifier
 * @c: unknown specifier
 * Return: int
 */
int handle_unknown(char c)
{
	if (c == ' ')
		return (-1);
	print_char('%');
	print_char(c);
	return (1);
}
