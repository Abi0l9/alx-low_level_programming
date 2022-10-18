#include "main.h"
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 'a';
		int l = 'z';

		while (j <= l)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
