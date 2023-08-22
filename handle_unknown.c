#include "main.h"
/**
 * handle_unknown - handles unknown specifier
 * @c: unknown specifier
 * Return: int
 */
int handle_unknown(char c)
{
	if (c == NULL || c == ' ')
		return (-1);
	return (print_char(c));
}
