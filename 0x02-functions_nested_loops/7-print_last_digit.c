#include "main.h"
/**
 *print_last_digit- prints the last digit of a number to the output
 * Return: returns an int
 * @c: passed parameter
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
