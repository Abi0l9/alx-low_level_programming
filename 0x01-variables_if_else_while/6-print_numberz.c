#include <stdio.h>
#include <ctype.h>
/**
 * main - print all single digit numbers of base 10
 *  starting from 0, followed by a new line.
 *  Return: return (0) for successful compilation
 */
int main(void)
{
	int x;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
