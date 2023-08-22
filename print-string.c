#include "main.h"
/**
 * print_string - prints a string
 * @str: string to be output
 * Return: void
 */
void print_string(char *str)
{
	if (str == NULL)
		return;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
