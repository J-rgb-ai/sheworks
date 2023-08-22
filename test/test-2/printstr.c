#include "main.h"
/**
 * print_str - prints out a string
 * @args: arguments
 * @count: integer count
 * Return: counter value
 */
int print_str(va_list args, int count)
{
	int cj;
	char *string = va_arg(args, char *);

	for (cj = 0; string[cj] != '\0'; cj++)
	{
		if (string[cj] == 0)
			break;
		_putchar(string[cj]);
		count++;
	}
	return (count);
}
