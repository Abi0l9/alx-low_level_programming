#include "main.h"
/**
 *print_last_digit- prints the last digit of a number to the output
 * Return: returns an int
 * @c: passed parameter
 */
int print_last_digit(int c)
{
	if (n < 0)
		n *= -1;
	int i = n % 10;

	_putchar(i + '0');
	return (i);
}
