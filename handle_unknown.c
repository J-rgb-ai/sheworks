#include "main.h"
/**
 * handle_unknown - edge case test
 * @c: cahracter
 * Return: integer count
 */
int handle_unknown(char c)
{
	if (c == ' ' || c == '\0')
		return (-1);
	return (print_char(c));
}
