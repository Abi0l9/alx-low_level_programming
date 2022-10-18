#include "main.h"
/**
 *  print_alphabet - It prints all the alphabets from a - z
 *  Return - This function returns nothing.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
