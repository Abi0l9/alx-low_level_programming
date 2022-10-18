#include <stdio.h>
#include "main.h"

/**
 *  main - prints a string using putchar to the standard output
 *  Return: returns a 0 for successful compilation.
 */
int main(void)
{
	char n[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
