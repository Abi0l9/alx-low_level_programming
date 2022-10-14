#include <stdio.h>
#include <ctype.h>
/**
 *  main - prints the alphabets from a to z in lowercase
 *  Return: zero shoild be returned to indicate a successful compolation
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower = tolower(x);

		putchar(lower);
	}
	putchar('\n');
	return (0);
}
