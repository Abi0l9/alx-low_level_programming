#include <stdio.h>
#include <ctype.h>
/**
 *  main - prints all possible combinations of single-digit numbers
 *  Return: zero should be returned to indicate a successful compilation
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
