#include "main.h"
/**
<<<<<<< HEAD
<<<<<<< HEAD
 * handle_unknown - edge case test
 * @c: cahracter
 * Return: integer count
 */
int handle_unknown(char c)
{
	if (c == ' ' || c == '\0')
		return (-1);
	return (print_char(c));
=======
=======
>>>>>>> 9994e99e729e9a5b0e14f69520db1ab6fc137cba
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
<<<<<<< HEAD
>>>>>>> 9994e99e729e9a5b0e14f69520db1ab6fc137cba
=======
>>>>>>> 9994e99e729e9a5b0e14f69520db1ab6fc137cba
}
