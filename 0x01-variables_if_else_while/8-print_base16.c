#include <stdio.h>
#include <ctype.h>
/**
 *  main - prints all the numbers in base 16 in lowercase
 *  Return: zero shoild be returned to indicate a successful compilation
 */
int main(void)
{
	int x;
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	for (x = 'A'; x <= 'F'; x++)
	{
		int lower = tolower(x);

		putchar(lower);
	}
	putchar('\n');
	return (0);
}
