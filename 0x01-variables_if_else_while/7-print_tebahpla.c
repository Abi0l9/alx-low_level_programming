#include <stdio.h>
#include <ctype.h>
/**
 *  main - prints the alphabets from z to a in lowercase
 *  Return: zero shoild be returned to indicate a successful compolation
 */
int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		int lower = tolower(x);

		putchar(lower);
	}
	putchar('\n');
	return (0);
}
