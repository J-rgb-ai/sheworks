#include "main.h"
/**
 * print_int - prints integer
 * @num: integer
 * Return: integer count
 */
int print_int(int num)
{
	int num_len = 0;
	int temp = num;
	int count = 0;
	int i;

	if (num < 0)
	{
		print_char('-');
		count++;
		num = -num;
	}
	while (temp != 0)
	{
		num_len++;
		temp /= 10;
	}
	if (num == 0)
	{
		print_char('0');
		count++;
	}
	else
	{
		int divisor = 1;

		for (i = 1; i < num_len; i++)
			divisor *= 10;
		while (divisor != 0)
		{
			int digit = num / divisor;

			print_char('0' + digit);
			count++;
			num -= digit * divisor;
			divisor /= 10;
		}
	}
	return (count);
}
