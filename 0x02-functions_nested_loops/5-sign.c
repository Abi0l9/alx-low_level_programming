#include "main.h"
/**
 * print_sign - prints a sign
 * Return: returns a positive number or negative number or zero
 * @c: the parameter passed to the function
 */
int print_sign(int c)
{
	int result;

	if (c > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (c == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (c < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
