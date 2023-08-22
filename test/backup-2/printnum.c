#include "main.h"
/**
 * print_num - prints numbers
 * @args: arguments
 * @count: count integer
 * Return: counter value
 */
int print_num(va_list args, int count)
{
	int raw = va_arg(args, int);
	int temp_var = raw;
	int div, number;

	if (raw == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (raw < 0)
	{
		_putchar('-');
		count++;
		temp_var = -temp_var;
	}

	div = 1;
	while (temp_var / div > 0)
	{
		div *= 10;
	}
	div /= 10;
	while (div != 0)
	{
		number = temp_var / div;
		_putchar(number + '0');
		count++;
		temp_var %= div;
		div /= 10;
	}
	return (count);
}
