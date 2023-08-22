#include "main.h"
/**
 * print_string - prints a string
 * @str: string to be output
 * Return: void
 */
int print_string(char *str)
{
	if (str == NULL)
		return (-1);
	while (*str != '\0')
	{
		print_char(*str);
		str++;
	}
	return (1);
}
