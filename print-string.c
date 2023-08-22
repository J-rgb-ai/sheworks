#include "main.h"
/**
 * print_string - prints a string
 * @str: string to be output
 * Return: always 0 success
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
	return (0);
}
